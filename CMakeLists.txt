cmake_minimum_required(VERSION 3.13)
project(untitled3)

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)
set(CMAKE_CXX_STANDARD 11)

add_executable(untitled3 treemap.h test_treemap.cc)

target_include_directories(untitled3
        PRIVATE
        ${GTEST_INCLUDE_DIRS})

target_link_libraries(untitled3
        PRIVATE
        GTest::GTest
        Threads::Threads)

target_compile_options(untitled3 PRIVATE -Wall -Werror)