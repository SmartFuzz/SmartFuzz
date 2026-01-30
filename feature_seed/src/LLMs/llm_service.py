import os
import json
from typing import Dict, Any, List, Optional, Union
from langchain_core.messages import HumanMessage, SystemMessage, AIMessage
from langchain.chat_models import init_chat_model
from langchain_core.prompts import ChatPromptTemplate
from langchain_core.output_parsers import StrOutputParser
from langchain_core.runnables import RunnablePassthrough

class LLMService:
    """
    大模型服务类，提供统一的接口来调用不同的大模型
    支持OpenAI、Azure OpenAI、Anthropic等多种模型提供商
    """
    
    def __init__(self, config_path: str = "../../config.json"):
        """
        初始化大模型服务
        
        Args:
            config_path: 配置文件路径，默认为项目根目录下的config.json
        """
        # 加载配置文件
        self.config = self._load_config(config_path)
        # 初始化环境变量
        self._setup_environment()
        # 模型实例字典，用于缓存不同配置的模型实例
        self.models: Dict[str, Any] = {}
    
    def _load_config(self, config_path: str) -> Dict[str, Any]:
        """\加载配置文件"""
        try:
            if os.path.exists(config_path):
                with open(config_path, 'r', encoding='utf-8') as f:
                    return json.load(f)
            else:
                # 如果配置文件不存在，返回默认配置
                return {
                    "proxies": {
                        "http_proxy": os.environ.get("http_proxy", ""),
                        "https_proxy": os.environ.get("https_proxy", "")
                    },
                    "openai": {
                        "api_key": os.environ.get("OPENAI_API_KEY", ""),
                        "api_base": os.environ.get("OPENAI_API_BASE", "https://api.openai.com/v1")
                    }
                }
        except Exception as e:
            print(f"加载配置文件失败: {e}")
            # 返回默认配置
            return {
                "proxies": {
                    "http_proxy": os.environ.get("http_proxy", ""),
                    "https_proxy": os.environ.get("https_proxy", "")
                },
                "openai": {
                    "api_key": os.environ.get("OPENAI_API_KEY", ""),
                    "api_base": os.environ.get("OPENAI_API_BASE", "https://api.openai.com/v1")
                }
            }
    
    def _setup_environment(self) -> None:
        """设置环境变量"""
        # 设置代理
        if "proxies" in self.config:
            if "http_proxy" in self.config["proxies"]:
                os.environ["http_proxy"] = self.config["proxies"]["http_proxy"]
            if "https_proxy" in self.config["proxies"]:
                os.environ["https_proxy"] = self.config["proxies"]["https_proxy"]
        
        # 设置OpenAI API配置
        if "openai" in self.config:
            if "api_key" in self.config["openai"]:
                os.environ["OPENAI_API_KEY"] = self.config["openai"]["api_key"]
            if "api_base" in self.config["openai"]:
                os.environ["OPENAI_API_BASE"] = self.config["openai"]["api_base"]
    
    def get_model(
        self,
        model_name: str = "gpt-4o-mini",
        model_provider: str = "openai",
        **kwargs
    ) -> Any:
        """
        获取模型实例（带缓存机制）
        
        Args:
            model_name: 模型名称，如"gpt-4o-mini"、"gpt-3.5-turbo"等
            model_provider: 模型提供商，如"openai"、"anthropic"等
            **kwargs: 其他模型参数
        
        Returns:
            模型实例
        """
        # 创建缓存键
        cache_key = f"{model_provider}_{model_name}_{str(kwargs)}"
        
        # 如果模型实例已存在于缓存中，直接返回
        if cache_key in self.models:
            return self.models[cache_key]
        
        try:
            # 初始化模型
            model = init_chat_model(
                model=model_name,
                model_provider=model_provider,
                **kwargs
            )
            
            # 缓存模型实例
            self.models[cache_key] = model
            return model
        except Exception as e:
            print(f"初始化模型失败: {e}")
            raise
    
    def chat_completion(
        self,
        messages: List[Dict[str, str]],
        model_name: str = "gpt-4o-mini",
        model_provider: str = "openai",
        **kwargs
    ) -> Dict[str, Any]:
        """
        执行聊天完成任务
        
        Args:
            messages: 消息列表，格式为[{"role": "user", "content": "..."}, ...]
            model_name: 模型名称
            model_provider: 模型提供商
            **kwargs: 其他模型参数
        
        Returns:
            包含响应的字典
        """
        try:
            # 转换消息格式
            langchain_messages = []
            for msg in messages:
                if msg["role"] == "system":
                    langchain_messages.append(SystemMessage(content=msg["content"]))
                elif msg["role"] == "user":
                    langchain_messages.append(HumanMessage(content=msg["content"]))
                elif msg["role"] == "assistant":
                    langchain_messages.append(AIMessage(content=msg["content"]))
            
            # 获取模型并调用
            model = self.get_model(model_name, model_provider, **kwargs)
            response = model.invoke(langchain_messages)
            
            # 格式化响应
            return {
                "success": True,
                "content": response.content,
                "model": model_name,
                "provider": model_provider,
                "raw_response": response
            }
        except Exception as e:
            return {
                "success": False,
                "error": str(e),
                "model": model_name,
                "provider": model_provider
            }
    
    def text_completion(
        self,
        prompt: str,
        model_name: str = "gpt-4o-mini",
        model_provider: str = "openai",
        system_prompt: Optional[str] = None,
        **kwargs
    ) -> Dict[str, Any]:
        """
        执行文本完成任务
        
        Args:
            prompt: 用户提示文本
            model_name: 模型名称
            model_provider: 模型提供商
            system_prompt: 系统提示文本（可选）
            **kwargs: 其他模型参数
        
        Returns:
            包含响应的字典
        """
        # 构建消息列表
        messages = []
        if system_prompt:
            messages.append({"role": "system", "content": system_prompt})
        messages.append({"role": "user", "content": prompt})
        
        # 调用聊天完成方法
        return self.chat_completion(messages, model_name, model_provider, **kwargs)
    
    def structured_completion(
        self,
        prompt: str,
        output_format: Dict[str, Any],
        model_name: str = "gpt-4o-mini",
        model_provider: str = "openai",
        system_prompt: Optional[str] = None,
        **kwargs
    ) -> Dict[str, Any]:
        """
        执行结构化输出任务
        
        Args:
            prompt: 用户提示文本
            output_format: 期望的输出格式描述
            model_name: 模型名称
            model_provider: 模型提供商
            system_prompt: 系统提示文本（可选）
            **kwargs: 其他模型参数
        
        Returns:
            包含结构化响应的字典
        """
        # 构建结构化提示
        format_instructions = f"请按照以下JSON格式输出结果：{json.dumps(output_format, ensure_ascii=False)}"
        
        # 构建系统提示
        full_system_prompt = f"你是一个助手，需要根据用户的问题生成结构化的JSON响应。{format_instructions}"
        if system_prompt:
            full_system_prompt = f"{system_prompt}\n{full_system_prompt}"
        
        # 调用文本完成
        result = self.text_completion(
            prompt=prompt,
            model_name=model_name,
            model_provider=model_provider,
            system_prompt=full_system_prompt,
            **kwargs
        )
        
        # 如果成功，尝试解析JSON
        if result["success"]:
            try:
                parsed_json = json.loads(result["content"])
                result["structured_content"] = parsed_json
            except json.JSONDecodeError as e:
                result["success"] = False
                result["error"] = f"解析JSON失败: {str(e)}"
        
        return result
    
    def create_chain(
        self,
        prompt_template: str,
        model_name: str = "gpt-4o-mini",
        model_provider: str = "openai",
        system_template: Optional[str] = None,
        **kwargs
    ) -> Any:
        """
        创建一个可重用的LangChain链
        
        Args:
            prompt_template: 用户提示模板
            model_name: 模型名称
            model_provider: 模型提供商
            system_template: 系统提示模板（可选）
            **kwargs: 其他模型参数
        
        Returns:
            LangChain链实例
        """
        # 获取模型
        model = self.get_model(model_name, model_provider, **kwargs)
        
        # 创建提示模板
        if system_template:
            prompt = ChatPromptTemplate.from_messages([
                ("system", system_template),
                ("user", prompt_template)
            ])
        else:
            prompt = ChatPromptTemplate.from_template(prompt_template)
        
        # 创建链
        chain = {
            "input": RunnablePassthrough()
        } | prompt | model | StrOutputParser()
        
        return chain

# 使用示例
if __name__ == "__main__":
    # 初始化大模型服务
    llm_service = LLMService()
    
    # 示例1：简单聊天完成
    # messages = [
    #     {"role": "system", "content": "你是一个翻译助手"},
    #     {"role": "user", "content": "将'你好，世界！'翻译成英文"}
    # ]
    # chat_result = llm_service.chat_completion(messages)
    # print("聊天完成结果:", chat_result)
    
    # # 示例2：文本完成
    # text_result = llm_service.text_completion(
    #     prompt="写一个简短的介绍，关于如何使用这个大模型服务类",
    #     system_prompt="你是一个技术文档编写助手"
    # )
    # print("文本完成结果:", text_result)
    
    # # 示例3：结构化输出
    # structured_result = llm_service.structured_completion(
    #     prompt="列出三种常见的数据库类型及其特点",
    #     output_format={
    #         "databases": [
    #             {
    #                 "name": "数据库名称",
    #                 "type": "类型",
    #                 "features": ["特点1", "特点2"]
    #             }
    #         ]
    #     }
    # )
    # print("结构化输出结果:", structured_result)
    
    # 示例4：创建并使用链
    translate_chain = llm_service.create_chain(
        prompt_template="'{text}' 翻译成 {language}",
        system_template="你是一个专业的翻译家"
    )
    chain_result = translate_chain.invoke({"text": "你好，世界！", "language": "法语"})
    print("链调用结果:", chain_result)