cmake_minimum_required(VERSION 3.10)
project(Lab4)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Указываем файлы класса и точку входа
add_executable(Lab4
    main.cpp 
    LineSegment.cpp 
    LineSegment.h
)

if(MSVC)
    add_compile_options(/utf-8)
endif()
