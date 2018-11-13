cmake_minimum_required(VERSION 2.7)
project(test)
set(CMAKE_CXX_STANDARD  14)
# SET(CMAKE_C_COMPILER "/usr/bin/gcc")
# SET(CMAKE_CXX_COMPILER "/usr/bin/g++")

# open debug
set(CMAKE_BUILD_TYPE "Debug")

#set(YACC_FILE json.tab.cpp)
#file(GLOB FILES *.hpp *.h)
#set(SOURCE_FILES test.cpp )
add_executable(test main.cpp)