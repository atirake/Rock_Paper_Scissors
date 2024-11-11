cmake_minimum_required(VERSION 3.29)
project(Rock_Paper_Scissors)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Rock_Paper_Scissors
    choice_mapping.h
    execute_game.cpp
    main.cpp
    system_input.cpp
    user_input.cpp)
