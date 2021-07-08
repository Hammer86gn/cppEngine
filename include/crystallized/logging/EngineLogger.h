//
// Created by Hammer86gn on 7/8/2021.
//

#ifndef CRYSTALLIZEDENGINE_ENGINELOGGER_H
#define CRYSTALLIZEDENGINE_ENGINELOGGER_H

#include <string>
#include <fstream>

namespace logging {

    enum LoggerType {
        RENDER


    };
    const std::string loggerTypeToString(int loggerType);

    enum LogLevel {
        INFO,
        WARN,
        CONFIG,
        ERROR
    };
    const std::string logLevelToString(int logLevel);

    class EngineLogger {
    public:
        explicit EngineLogger(LoggerType type);

        void log(LogLevel level, std::string message);

    private:
        LoggerType m_type;

    };

}

#endif //CRYSTALLIZEDENGINE_ENGINELOGGER_H
