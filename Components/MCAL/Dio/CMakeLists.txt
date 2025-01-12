#cmake set minimum version
cmake_minimum_required(VERSION 3.2)

#setting a name for the target
project(MDIO C)

#set the compiler flag to use the avr gcc insteat of default gcc
set(CMAKE_C_COMPILER "avr-gcc")

#set a variable name to use when ever i need the location of included .h files
set(${PROJECT_NAME}_INCLUDE_COMMON_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../Common/inc/")

set(${PROJECT_NAME}_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/inc")


#set a variable name to easly use when ever i need the c files related to this target
file(GLOB_RECURSE ${PROJECT_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")


# just for debugging
message(STATUS "${PROJECT_NAME}")
message(STATUS "${${PROJECT_NAME}_SOURCES}")
message(STATUS "${CMAKE_C_COMPILER}")

#creating a lib from the c files :D
add_library(${PROJECT_NAME} STATIC "${${PROJECT_NAME}_SOURCES}")

#linking the cmake with the location of the .h files using target include command
target_include_directories(${PROJECT_NAME} PUBLIC "${${PROJECT_NAME}_INCLUDE_COMMON_DIR}")

target_include_directories(${PROJECT_NAME} PUBLIC "${${PROJECT_NAME}_INCLUDE_DIR}")

