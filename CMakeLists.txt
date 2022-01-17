cmake_minimum_required(VERSION 3.21)
project(A0)

set(CMAKE_CXX_STANDARD 14)

include_directories(Main/Qunit)
include_directories(Main/Qunit/headers)
include_directories(Main/Stack)
include_directories(Main/Stack/headers)

add_executable(A0
        Main/Qunit/headers/QUnit.h
        Main/Stack/headers/Stack.h
        StackQUnit.cc
        Main/StackTest/source/StackQUnit-3-2.cc)
