cmake_minimum_required(VERSION 3.25)
project(LoggerProjekt)

set(CMAKE_CXX_STANDARD 17)

add_executable(LoggerProjekt main.cpp Logger.h Writer.h ConsolenWriter.h MultClass.cpp MultClass.h MultipliziererImpl.h MultipliziererOptimierer.h)
