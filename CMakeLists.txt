cmake_minimum_required(VERSION 3.12)
project(ConcreteAbstracts)

add_executable(simulator src/main.cpp)
target_include_directories(simulator PUBLIC include)
