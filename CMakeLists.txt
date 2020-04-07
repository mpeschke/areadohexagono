cmake_minimum_required(VERSION 3.5)

project(areadohexagono LANGUAGES C)

file(GLOB_RECURSE SOURCES
    src/*.h
    src/*.c
)

add_executable(areadohexagono ${SOURCES})
