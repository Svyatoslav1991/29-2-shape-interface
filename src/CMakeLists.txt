cmake_minimum_required (VERSION 3.8)

project ("29-2-shape-interface")

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (29-2-shape-interface "main.cpp" ${MY_INCLUDE_DIR}/boundingboxdimensions.h "boundingboxdimensions.cpp" ${MY_INCLUDE_DIR}/shape.h "shape.cpp" ${MY_INCLUDE_DIR}/functions.h "functions.cpp" ${MY_INCLUDE_DIR}/triangle.h "triangle.cpp" ${MY_INCLUDE_DIR}/circle.h "circle.cpp" ${MY_INCLUDE_DIR}/rectangle.h "rectangle.cpp")

target_include_directories(29-2-shape-interface PUBLIC ${CMAKE_SOURCE_DIR}/include)