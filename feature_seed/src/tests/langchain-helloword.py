import getpass
import os
import sys
src_dir_path = os.path.abspath(os.path.join(os.path.dirname(__file__), "../"))
sys.path.append(src_dir_path)
from utils import Fileutil
from icecream import ic

from langchain_core.messages import HumanMessage, SystemMessage

from langchain.chat_models import init_chat_model
from langchain_core.prompts import ChatPromptTemplate

system_template = "Translate the following from English into {language}"

prompt_template = ChatPromptTemplate.from_messages(
    [("system", system_template), ("user", "{text}")]
)
messages = prompt_template.format_messages(language="italian", text="hi!")
# 初始化配置

config = Fileutil.read_json("../../config.json")
os.environ["http_proxy"] = config['proxies']['http_proxy']
os.environ["https_proxy"] = config['proxies']['https_proxy']
os.environ["OPENAI_API_KEY"] = config['openai']['api_key']
os.environ["OPENAI_API_BASE"] = config['openai']['api_base']
api_key = os.environ['OPENAI_API_KEY']
api_base = os.environ['OPENAI_API_BASE']

# main
if __name__ == "__main__":
    if not os.environ.get("OPENAI_API_KEY"):
      os.environ["OPENAI_API_KEY"] = getpass.getpass("Enter API key for OpenAI: ")
    ic(api_key)
    ic(api_base)
    # ic(api_key)
    # ic(api_key)
    model = init_chat_model("gpt-4o-mini", model_provider="openai")
    messages = [
      SystemMessage(content="Translate the following from English into Italian"),
      HumanMessage(content="hi!"),
    ]
    response = model.invoke(messages)
    ic(response)