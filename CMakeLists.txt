cmake_minimum_required(VERSION 3.26)
project(helper)

set(CMAKE_CXX_STANDARD 17)

add_executable(helper main.cpp
        Expression.cpp
        Expression.h
        computing/TrafficLightDelay.cpp
        computing/TrafficLightDelay.h
        computing/TrafficIntesity.cpp
        computing/TrafficIntesity.h
        computing/Bandwidth.cpp
        computing/Bandwidth.h
        computing/TrafficLightRegulatoryAndTheoreticalBandwith.cpp
        computing/TrafficLightRegulatoryAndTheoreticalBandwith.h
        computing/RealBandwith.cpp
        computing/RealBandwith.h
        computing/BusyLevel.cpp
        computing/BusyLevel.h)
