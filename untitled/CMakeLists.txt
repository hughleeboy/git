cmake_minimum_required(VERSION 3.17)
project(untitled)

add_library(libgit2 SHARED IMPORTED) # or STATIC instead of SHARED
set_target_properties(libgit2 PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/libs/libgit2-1.1.0/build/libgit2.so"
        INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_SOURCE_DIR}/libs/libgit2-1.1.0/include/"
        )


set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp)
target_link_libraries(untitled libgit2)