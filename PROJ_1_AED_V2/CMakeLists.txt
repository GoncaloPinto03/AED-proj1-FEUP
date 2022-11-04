cmake_minimum_required(VERSION 3.23)
project(PROJ_1_AED)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(PROJ_1_AED
        Estudante.cpp
        Estudante.h
        Gestor.h
        HorarioUC.cpp
        HorarioUC.h
        menu.cpp
        Slot.cpp
        Slot.h
        UCTurma.cpp
        UCTurma.h )
