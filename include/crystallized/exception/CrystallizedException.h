//
// Created by Hammer86gn on 7/8/2021.
//

#ifndef CRYSTALLIZEDENGINE_CRYSTALLIZEDEXCEPTION_H
#define CRYSTALLIZEDENGINE_CRYSTALLIZEDEXCEPTION_H

#include <exception>
#include <string>

class CrystallizedException : std::exception {
public:
    CrystallizedException() : std::exception() {}
    explicit CrystallizedException(std::string message) : std::exception() {
        this->message = message;
    }

    const char * what() const noexcept override {
        return message.c_str();
    }

    std::string message;

};

#endif //CRYSTALLIZEDENGINE_CRYSTALLIZEDEXCEPTION_H
