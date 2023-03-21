cmake_minimum_required(VERSION 3.23)
project(ShapePractice)

set(CMAKE_CXX_STANDARD 14)

add_executable(ShapePractice "source files/main.cpp" "rectangle/rectangle.cpp" rectangle/rectangle.h "circle/circle.cpp" circle/circle.h boundingCircle/boundingCircle.cpp boundingCircle/boundingCircle.h)
