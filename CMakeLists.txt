cmake_minimum_required(VERSION 3.16) 
project(SENSOR_MONITORING)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(SENSOR_MONITORING
    src/main.c
    src/sensor.c
)
