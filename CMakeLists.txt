cmake_minimum_required(VERSION 2.8)
project(linux_practice)

set(CMAKE_CXX_FLAGS "-g -fPIC -shared -O2  -Wall -D_GNU_SOURCE -std=c++0x")
set(SOURCE_FILES main.cpp)

add_executable(linux_practice ${SOURCE_FILES})


target_link_libraries(linux_practice curses)