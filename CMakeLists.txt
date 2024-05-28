cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        Persona.cpp
        Persona.h
        Guerrero.cpp
        Guerrero.h
        Filosofo.cpp
        Filosofo.h
        Comandante.cpp
        Comandante.h
        General.cpp
        General.h)
