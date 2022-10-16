cmake_minimum_required(VERSION 3.12)
project(ConcreteAbstracts)

# ADD CPP EXECUTABLES HERE
add_executable(simulator 
                src/main.cpp 
                src/Country.cpp 
                src/AbstractCountry.cpp
                src/Transport.cpp
                src/TransportContext.cpp
                src/WeaponTransporter.cpp
                src/AttackVessel.cpp
                src/SuppliesTransporter.cpp)

target_include_directories(simulator PUBLIC include)
