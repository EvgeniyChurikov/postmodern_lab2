cmake_minimum_required(VERSION 3.22)

set(This SorterTests)

set(Sources SorterTests.cpp)
add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC gtest_main postmodern_lab2)

add_test(NAME ${This}
        COMMAND ${This}
)
