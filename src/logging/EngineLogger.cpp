//
// Created by Hammer86gn on 7/8/2021.
//

#include <crystallized/logging/EngineLogger.h>
#include <iostream>


logging::EngineLogger::EngineLogger(LoggerType type) {
        this->m_type = type;
}

void logging::EngineLogger::log(logging::LogLevel level, std::string message) {
    std::string out_message("[" + logging::loggerTypeToString(this->m_type) + "]" + " [" + logging::logLevelToString(level) + "] " + message);
    std::cout << out_message << + "\n";
}


static const char* LogLevelStrings[] = {"INFO","WARN","CONFIG","ERROR"};
const std::string logging::logLevelToString(int logLevel) {
    return LogLevelStrings[logLevel];
}

static const char* LoggerTypeStrings[] = {"RENDER"};
const std::string logging::loggerTypeToString(int loggerType) {
    return LoggerTypeStrings[loggerType];
}
