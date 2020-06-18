cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(BINARY_NAME hashgen)

project(HashGenerator
  VERSION 1.0.0
  DESCRIPTION "Application to generate different kind of hashes"
  HOMEPAGE_URL "https://github.com/bartkessels/HashGenerator"
)

# Variables
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_XX_STANDARD_REQUIRED ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build)

# Subdirectories
add_subdirectory(third_party)
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(packaging)