cmake_minimum_required(VERSION 3.6)
project(VORM)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_PREFIX_PATH ${PROJECT_SOURCE_DIR}/third_party)

find_package(absl REQUIRED)

file(GLOB_RECURSE vorm_HEADERS vorm/*.h)
file(GLOB_RECURSE vorm_SOURCES vorm/*.cpp)

add_library(vorm SHARED ${vorm_SOURCES} ${vorm_HEADERS})

add_subdirectory(test)