cmake_minimum_required(VERSION 3.20)
project(LibraryManagement)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

# This line is key: it must find ALL .cpp files in src
file(GLOB SOURCES "src/*.cpp" "main.cpp")

add_executable(LibraryManagement ${SOURCES})