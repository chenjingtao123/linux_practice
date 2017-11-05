cmake_minimum_required(VERSION 2.8)
project(linux_practice)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_USE_RELATIVE_PATHS ON)
include_directories(${PROJECT_SOURCE_DIR}/.)
aux_source_directory(${PROJECT_SOURCE_DIR}/. SOURCE_FILES)

add_executable(linux_practice ${SOURCE_FILES})


target_link_libraries(linux_practice curses)