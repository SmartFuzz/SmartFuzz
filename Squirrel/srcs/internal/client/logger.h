// logger.h
#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <fstream>
#include <sstream>
#include <mutex>
#include <memory>
#include <ctime>

enum class LogLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    FATAL
};

class Logger {
public:
    // 获取单例实例
    static Logger& getInstance();

    // 设置日志级别
    void setLevel(LogLevel level);
    
    // 设置日志输出文件
    void setOutputFile(const std::string& filename);
    
    // 设置是否输出到控制台
    void setConsoleOutput(bool enabled);

    // 日志输出方法
    void debug(const std::string& message);
    void info(const std::string& message);
    void warning(const std::string& message);
    void error(const std::string& message);
    void fatal(const std::string& message);

    // 使用流风格的日志输出
    template<typename T>
    Logger& operator<<(const T& value);
    
    // 重置流状态
    Logger& operator<<(Logger& (*manipulator)(Logger&));

    // 用于重置流状态的函数
    static Logger& endl(Logger& logger);

private:
    // 私有构造函数，防止外部实例化
    Logger();
    ~Logger();
    
    // 禁止拷贝构造和赋值
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;

    // 实际的日志输出方法
    void log(LogLevel level, const std::string& message);
    
    // 获取日志级别的字符串表示
    std::string levelToString(LogLevel level) const;
    
    // 获取当前时间戳字符串
    std::string getTimestamp() const;

    LogLevel m_minLevel;
    std::ofstream m_outputFile;
    bool m_consoleOutput;
    std::mutex m_mutex;
    std::ostringstream m_stream;
};

// 流操作符的实现
template<typename T>
Logger& Logger::operator<<(const T& value) {
    m_stream << value;
    return *this;
}

// 宏定义，简化日志调用
#define LOG_DEBUG Logger::getInstance().debug
#define LOG_INFO Logger::getInstance().info
#define LOG_WARNING Logger::getInstance().warning
#define LOG_ERROR Logger::getInstance().error
#define LOG_FATAL Logger::getInstance().fatal

#define LOG_STREAM(level) Logger::getInstance() << "[" << #level << "] " << Logger::getInstance().getTimestamp() << " - "

#endif // LOGGER_H