cmake_minimum_required(VERSION 3.19)
project(CrystallizedEngine)
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(thirdparty/glfw)

include_directories(thirdparty/glfw/include)
include_directories(thirdparty/glad/include)
include_directories(include)

add_library(CrystallizedEngine src/Crystallized.cpp include/crystallized/Crystallized.h src/logging/EngineLogger.cpp include/crystallized/logging/EngineLogger.h include/crystallized/exception/CrystallizedException.h)

add_subdirectory(test)