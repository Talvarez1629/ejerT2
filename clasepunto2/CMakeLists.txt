cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(clasepunto2)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


# Agregar la carpeta de includes
include_directories(include)    

# Agregar los archivos fuente
add_executable(Point2dExecutable src/main.cpp src/Point2d.cpp)
