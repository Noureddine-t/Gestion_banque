cmake_minimum_required(VERSION 3.26)
project(TD1_banque)

set(CMAKE_CXX_STANDARD 17)

add_executable(TD1_banque main.cpp
        Client.cpp
        Client.h
        Adresse.cpp
        Adresse.h
        Compte.cpp
        Compte.h
        Operation.cpp
        Operation.h
        Date.cpp
        Date.h)
