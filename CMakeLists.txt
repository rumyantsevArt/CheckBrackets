cmake_minimum_required(VERSION 3.14)
project(Brackets)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
find_package(GTest REQUIRED)

add_executable(brackets_tests
    brackets.cpp
    tests.cpp
)

target_link_libraries(brackets_tests
    PRIVATE GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(brackets_tests)
