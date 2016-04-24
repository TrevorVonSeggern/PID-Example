cmake_minimum_required(VERSION 3.5)
project(PIDExample CXX)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
		PIDContainer.cpp PIDContainer.h
		PIDController.cpp PIDController.h
		InputContainer.cpp InputContainer.h
		OutputContainer.cpp OutputContainer.h
		LinkedList.tpp
		Node.tpp)
add_executable(PIDExample ${SOURCE_FILES})