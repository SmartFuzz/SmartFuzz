from datetime import datetime, timedelta

import requests
import re
import json
import os
import time
import csv
import logging

logger = logging.getLogger(__name__)

current_dir = os.path.dirname(os.path.abspath(__file__))

#github personal token
TOKEN = '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'
HEADERS = {
    'Authorization': f'bearer ' + TOKEN,
    'Content-Type': 'application/json'
}

def graphQL_query(query, variables=None):
    url = f'https://api.github.com/graphql'
    payload = {"query": query, "variables": variables or {}}
    responses = requests.post(url, json=payload, headers=HEADERS)

    return responses.json()

#bugs before some time
def search_issues_bug(before_year):
    cursor = None
    has_next_page = True
    all_issues = []
    filtered = []
    count = 0
    years_ago = datetime.today() - timedelta(days=before_year * 365)
    print("起始时间：", years_ago.strftime("%Y-%m-%d"))
    labels = {"type: bug", "status: confirmed"}

    while has_next_page:
        query = """
        query($owner: String!, $repo: String!, $labels: [String!]!, $after: String, $orderBy:IssueOrder) {
            repository(owner: $owner, name: $repo) {
                issues(
                    labels: $labels
                    states: [OPEN, CLOSED]
                    first: 100
                    after: $after
                    orderBy: $orderBy
                ){
                    nodes { 
                        number
                        title
                        url
                        createdAt
                        state
                        body
                        labels(first: 10) { 
                            nodes { name }
                        }
                    }
                    pageInfo {
                        endCursor
                        hasNextPage
                    }
                }
            }
        }
        """
        variables = {
            'owner': "oceanbase",
            'repo': "oceanbase",
            'labels': ["type: bug", "status: confirmed"],
            'after': cursor,
            'orderBy': {"field": "CREATED_AT", "direction" : "DESC"}

        }
        result = graphQL_query(query, variables)

        #current page
        current_issues = result["data"]["repository"]["issues"]["nodes"]
        all_issues.extend(current_issues)

        #next pages
        page_info = result["data"]["repository"]["issues"]["pageInfo"]
        has_next_page = page_info["hasNextPage"]
        cursor = page_info["endCursor"]

        for issue in result['data']['repository']['issues']['nodes']:
            created_at = datetime.strptime(issue['createdAt'][:10], '%Y-%m-%d')
            issue_labels = {label["name"] for label in issue["labels"]["nodes"]}
            if created_at >= years_ago:
                if labels.issubset(issue_labels):
                    filtered.append({
                        'number': issue['number'],
                        'title': issue['title'],
                        'url': issue['url'],
                        'createdAt': issue['createdAt'],
                        'state': issue['state'],
                        'body': issue['body'],
                        'labels': [label['name'] for label in issue['labels']['nodes']]
                    })
                    count += 1

        time.sleep(1)

    return filtered

def bug_filter(bugs,keywords):
    view_bug = []
    for bug in bugs:
        title = bug.get("title", "").lower()
        body = bug.get("body", "").lower()
        if any(keyword in title or keyword in body for keyword in keywords):
            view_bug.append(bug)
    return view_bug

def to_csv(bugs,output_file):
    with open(output_file, 'w', newline='',encoding='utf-8') as f:
        writer = csv.writer(f)
        writer.writerow(["序号", "标题","链接",
                         "创建时间","状态","标签"])
        for idx,bug in enumerate(bugs):
            writer.writerow( [idx+1, bug['title'], bug['url'],
                              bug['createdAt'],bug['state'],bug['labels'] ])
            # f.write(f"   描述: {bug['body']}\n")

def extract_sql_from_text(text):
    sql_pattern = re.compile(r"""
            (?: # 注意：这里是 (?: ...) 非捕获组，不是 ( ... )
                # ========== DDL ==========
                (?:CREATE\s+(?:TABLE|VIEW|INDEX|TENANT|RESOURCE\s+UNIT|RESOURCE\s+POOL|USER)\b[^;]*?;) |
                (?:ALTER\s+(?:TABLE|TENANT|USER|SYSTEM)\b[^;]*?;) |
                (?:DROP\s+(?:TABLE|VIEW|INDEX|TENANT|RESOURCE\s+UNIT|RESOURCE\s+POOL|USER)\b[^;]*?;) |
                (?:TRUNCATE\s+TABLE?\s+\w[^;]*?;) |

                # ========== DML ==========
                (?:(?:INSERT|REPLACE|UPDATE|DELETE)\b[^;]*?;) |
                (?:SELECT\b[^;]*?;) |

                # ========== 事务 ==========
                (?:BEGIN(?:\s+WORK|\s+TRANSACTION)?\s*;) |
                (?:COMMIT(?:\s+WORK|\s+TRANSACTION)?(?:\s+AND\s+(?:NO\s+)?CHAIN)?\s*;) |
                (?:ROLLBACK(?:\s+WORK|\s+TRANSACTION)?(?:\s+AND\s+(?:NO\s+)?CHAIN)?\s*;) |
                (?:SAVEPOINT\s+\w+\s*;) |
                (?:RELEASE\s+(?:SAVEPOINT\s+)?\w+\s*;) |

                # ========== 预处理 ==========
                (?:PREPARE\s+\w+\s+FROM\s+[^;]*?;) |
                (?:EXECUTE\s+\w+(?:\s+USING\s+[^;]*?)?\s*;) |
                (?:DEALLOCATE\s+PREPARE\s+\w+\s*;) |

                # ========== 元数据 ==========
                (?:DESC(?:RIBE)?\s+\w[^;]*?;) |
                (?:SHOW\s+(?:CREATE|FULL\s+COLUMNS|TABLES|TRACE)\s*[^;]*?;) |
                (?:EXPLAIN(?:\s+EXTENDED|\s+PHY_PLAN)?\s+[^;]*?;) |

                # ========== 系统管理 ==========
                (?:SET\s+(?:GLOBAL|SESSION|OB\s+SYSTEM)\s+[^;]*?;) |
                (?:ALTER\s+SYSTEM\s+[^;]*?;) |
                (?:USE\s+\w+\s*;) |
                (?:DO\s+[^;]*?;) |

                # ========== CTE ==========
                (?:WITH\s+[^;]*?SELECT\s+[^;]*?;)
            )
        """, re.IGNORECASE | re.DOTALL | re.VERBOSE)

    matches = sql_pattern.findall(text)
    # 现在 matches 是字符串列表（因为我们用了非捕获组）
    return [match.strip() for match in matches if match.strip()]


def extract_bug_description(text: str) -> str:
    """
    提取 'Describe the bug' 和下一个 section（如 Environment, FastReproduce）之间的内容
    遇到新一行以 'Environment' 或 'FastReproduce' 开头时停止。
    """
    if not text or not isinstance(text, str):
        return ""

    lines = text.splitlines()
    description_lines = []
    in_description = False

    start_patterns = [
        r"describe[\s-]+the[\s-]+bug",
    ]
    end_patterns = [
        r"environment",
        r"fast[\s-]+reproduce",
    ]

    start_regex = re.compile("|".join(start_patterns), re.IGNORECASE)
    end_regex = re.compile("|".join(end_patterns), re.IGNORECASE)

    for line in lines:
        stripped = line.strip()

        # 检查是否进入 "Describe the bug" 段
        if not in_description and start_regex.search(stripped):
            in_description = True
            continue  # 不收集标题行本身

        # 检查是否进入下一个 section
        if in_description and end_regex.search(stripped):
            break  # 终止提取

        # 收集描述内容
        if in_description:
            description_lines.append(line)

        # 返回去除了首尾空白的内容
    return "\n".join(description_lines).strip()


def save_bugs_json(bugs, base_dir):
    bugs_dir = os.path.join(base_dir, "bugs")
    os.makedirs(bugs_dir, exist_ok=True)

    for bug in bugs:
        number = bug['number']
        file_path = os.path.join(bugs_dir, f"bug_{number}.json")
        description = extract_bug_description(bug['body'])
        bug_report = {
            "url": bug["url"],
            "title": bug["title"],
            "vulnerable_database": "oceanbase",  # 你可能需要从 body 或 label 中提取
            "date": bug["createdAt"],
            "vulnerable_version": "Unknown",
            "description": description,
            "poc": extract_sql_from_text(bug["body"])
        }

        with open(file_path, 'w', encoding='utf-8') as f:
            json.dump(bug_report, f, indent=4, ensure_ascii=False)



if __name__ == '__main__':
    ocean_bugs = search_issues_bug(5)
    to_csv(ocean_bugs,"ocean_bugs.csv")
    print(f"共找到 {len(ocean_bugs)} 个 bug")

    save_bugs_json(ocean_bugs, current_dir)

    view_keywords = {'view','视图'}
    view_bugs = bug_filter(ocean_bugs,view_keywords)
    to_csv(view_bugs,"ocean_bugs_about_view.csv")

    print(f"共找到 {len(view_bugs)} 个视图相关的 bug")


