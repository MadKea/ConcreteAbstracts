cmake_minimum_required(VERSION 3.12)

project(ConcreteAbstracts)

file(GLOB CPP_FILES src/*.cpp)
file(GLOB H_FILES include/*.cpp)
add_executable(simulator ${CPP_FILES} ${H_FILES})

target_include_directories(simulator PUBLIC include)
