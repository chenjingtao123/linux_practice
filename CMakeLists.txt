cmake_minimum_required(VERSION 2.8)
project(linux_practice)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp)

add_executable(linux_practice ${SOURCE_FILES})


target_link_libraries(linux_practice curses)