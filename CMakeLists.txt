cmake_minimum_required(VERSION 3.1)
project(Camera)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra")

include_directories(include/)

add_library(keyboard src/keyboard.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main keyboard)