cmake_minimum_required(VERSION 3.12)
project(ConcreteAbstracts)

# ADD CPP EXECUTABLES HERE
add_executable(simulator 
                src/main.cpp 
                src/Country.cpp 
                src/AbstractCountry.cpp)

target_include_directories(simulator PUBLIC include)
