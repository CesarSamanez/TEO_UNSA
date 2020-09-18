cmake_minimum_required(VERSION 3.5)

project(TEO_PROJECT1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB files "*.h" "*.cpp") #Definición de una variable global

add_executable(TEO_PROJECT1 main.cpp ${files} ) #linking
