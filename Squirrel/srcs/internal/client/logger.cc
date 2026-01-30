// logger.cc
#include "logger.h"
#include <iostream>
#include <iomanip>

// 实现单例模式
Logger& Logger::getInstance() {
    static Logger instance;
    return instance;
}

Logger::Logger() 
    : m_minLevel(LogLevel::INFO), 
      m_consoleOutput(true) {
    // 默认输出到控制台
}

Logger::~Logger() {
    if (m_outputFile.is_open()) {
        m_outputFile.close();
    }
}

void Logger::setLevel(LogLevel level) {
    m_minLevel = level;
}

void Logger::setOutputFile(const std::string& filename) {
    std::lock_guard<std::mutex> lock(m_mutex);
    
    if (m_outputFile.is_open()) {
        m_outputFile.close();
    }
    
    m_outputFile.open(filename, std::ios::app);
    
    if (!m_outputFile.is_open()) {
        std::cerr << "无法打开日志文件: " << filename << std::endl;
    }
}

void Logger::setConsoleOutput(bool enabled) {
    m_consoleOutput = enabled;
}

void Logger::debug(const std::string& message) {
    log(LogLevel::DEBUG, message);
}

void Logger::info(const std::string& message) {
    log(LogLevel::INFO, message);
}

void Logger::warning(const std::string& message) {
    log(LogLevel::WARNING, message);
}

void Logger::error(const std::string& message) {
    log(LogLevel::ERROR, message);
}

void Logger::fatal(const std::string& message) {
    log(LogLevel::FATAL, message);
}

void Logger::log(LogLevel level, const std::string& message) {
    if (level < m_minLevel) {
        return;
    }
    
    std::lock_guard<std::mutex> lock(m_mutex);
    
    std::string logMessage = "[" + levelToString(level) + "] " + 
                            getTimestamp() + " - " + message;
    
    if (m_consoleOutput) {
        // 根据日志级别设置不同的颜色
        switch (level) {
            case LogLevel::DEBUG:
                std::cout << "\033[34m"; // 蓝色
                break;
            case LogLevel::INFO:
                std::cout << "\033[32m"; // 绿色
                break;
            case LogLevel::WARNING:
                std::cout << "\033[33m"; // 黄色
                break;
            case LogLevel::ERROR:
                std::cout << "\033[31m"; // 红色
                break;
            case LogLevel::FATAL:
                std::cout << "\033[31;1m"; // 亮红色
                break;
        }
        
        std::cout << logMessage << "\033[0m" << std::endl;
    }
    
    if (m_outputFile.is_open()) {
        m_outputFile << logMessage << std::endl;
    }
}

std::string Logger::levelToString(LogLevel level) const {
    switch (level) {
        case LogLevel::DEBUG:   return "DEBUG";
        case LogLevel::INFO:    return "INFO";
        case LogLevel::WARNING: return "WARNING";
        case LogLevel::ERROR:   return "ERROR";
        case LogLevel::FATAL:   return "FATAL";
        default:                return "UNKNOWN";
    }
}

std::string Logger::getTimestamp() const {
    std::time_t now = std::time(nullptr);
    char buffer[80];
    
    // 转换为本地时间
    std::tm* localTime = std::localtime(&now);
    
    // 格式化时间
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", localTime);
    
    return std::string(buffer);
}

Logger& Logger::endl(Logger& logger) {
    logger.log(LogLevel::INFO, logger.m_stream.str());
    logger.m_stream.str(""); // 清空流
    return logger;
}

Logger& Logger::operator<<(Logger& (*manipulator)(Logger&)) {
    return manipulator(*this);
}