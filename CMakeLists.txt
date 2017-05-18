cmake_minimum_required(VERSION 3.4.3 FATAL_ERROR)
project(libpdk CXX)

add_library(libpdk SHARED src/pdk.cpp)
set_target_properties(libpdk PROPERTIES OUTPUT_NAME pdk)