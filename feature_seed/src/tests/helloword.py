
import getpass
import os
import sys
from langchain.llms import OpenAI
import os
src_dir_path = os.path.abspath(os.path.join(os.path.dirname(__file__), "../"))
sys.path.append(src_dir_path)
from utils import Fileutil
from icecream import ic
# 初始化配置

config = Fileutil.read_json("../../config.json")
os.environ["http_proxy"] = config['proxies']['http_proxy']
os.environ["https_proxy"] = config['proxies']['https_proxy']
os.environ["OPENAI_API_KEY"] = config['openai']['api_key']
os.environ["OPENAI_API_BASE"] = config['openai']['api_base']
api_key = os.environ['OPENAI_API_KEY']
api_base = os.environ['OPENAI_API_BASE']

api_base = os.getenv("OPENAI_API_BASE")
api_key = os.getenv("OPENAI_KEY")
llm = OpenAI(
    model="gpt-3.5-turbo-instruct",
    temperature=0,
    openai_api_key=api_key,
    openai_api_base=api_base
    )
llm.predict("介绍下你自己")