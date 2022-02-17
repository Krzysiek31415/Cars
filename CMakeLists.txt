cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Cars)

set(SRC_LIST
    Car.cpp
    Engine.cpp
    ElectricCar.cpp
    ElectricEngine.cpp
    HybridCar.cpp
    # main.cpp
    PetrolCar.cpp
    PetrolEngine.cpp
)

add_library(catch2 STATIC tests/catch_amalgamated.cpp)
add_library(SRC STATIC ${SRC_LIST})

add_executable(${PROJECT_NAME}-ut tests/tests.cpp)
target_link_libraries(${PROJECT_NAME}-ut catch2 )
target_link_libraries(${PROJECT_NAME}-ut SRC )

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} SRC )
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Werror -Wpedantic -Wextra)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})

enable_testing()
add_test(NAME tests COMMAND ${PROJECT_NAME}-ut)
