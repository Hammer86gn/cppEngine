//
// Created by Hammer86gn on 7/8/2021.
//

#include <crystallized/logging/EngineLogger.h>
#include <iostream>
#include <time.h>
#include <chrono>
#include <fstream>

logging::EngineLogger::EngineLogger(LoggerType type) {
        this->type = type;
}

void logging::EngineLogger::log(logging::LogLevel level, std::string message) {
    auto currentTime = std::chrono::system_clock::now();
    std::time_t logTime = std::chrono::system_clock::to_time_t(currentTime);

    //std::string out_message("[Crystallized Engine - " << std::ctime(&logTime) + "[" + logging::loggerTypeToString(this->type) + "]" + " [" + logging::logLevelToString(level) + "] " + message);
    std::string timeFormat(std::ctime(&logTime));
    timeFormat.replace(timeFormat.find("\n"),2,"");

    std::cout << "[Crystallized - "
    <<  timeFormat
    << "]"
    << "["
    << logging::loggerTypeToString(this->type)
    << "]" << "["
    << logging::logLevelToString(level)
    << "] "
    << message
    << "\n";
}


static const char* LogLevelStrings[] = {"INFO","WARN","CONFIG","ERROR"};
const std::string logging::logLevelToString(int logLevel) {
    return LogLevelStrings[logLevel];
}

static const char* LoggerTypeStrings[] = {"RENDER"};
const std::string logging::loggerTypeToString(int loggerType) {
    return LoggerTypeStrings[loggerType];
}
