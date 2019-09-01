cmake_minimum_required(VERSION 2.8.12)
project(marshi_table)

add_subdirectory(pybind11)
pybind11_add_module(_core MODULE
  main.cpp
  )
