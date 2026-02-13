
cmake_minimum_required(VERSION 3.10)

project(SimulacionCampoElectrico)

set(CMAKE_CXX_STANDARD 14)

# Añadimos el ejecutable
add_executable(SimulacionCampoElectrico main.cpp Carga.cpp)

