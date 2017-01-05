cmake_minimum_required(VERSION 3.6)
project(Coke)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/tokenizer/LexicalAnalyzer.cpp src/tokenizer/LexicalAnalyzer.h)
add_executable(Coke ${SOURCE_FILES})