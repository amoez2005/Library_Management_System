cmake_minimum_required(VERSION 3.20)
project(LibraryManagement)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)


file(GLOB SOURCES "src/*.cpp" "main.cpp")

add_executable(LibraryManagement ${SOURCES})