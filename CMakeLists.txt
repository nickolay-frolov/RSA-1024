cmake_minimum_required(VERSION 3.10) 
project(RSA_1024)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES 
    src/Main.cpp
)

add_executable(RSA_1024 ${SOURCES})