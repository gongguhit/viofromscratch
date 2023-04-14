cmake_minimum_required (VERSION 2.8) 
project(CStart)
set(CMAKE_BUILD_TYPE "Debug")


LIST(APPEND CMAKE_MODULE_PATH /home/ggx1c/Documents/cpplearn/g2o/cmake_modules)
set(G2O_ROOT /usr/local/include/g2o)

file(GLOB SRC_FILE *.cpp)

find_package(G2O REQUIRED)
find_package(Opencv REQUIRED)

include_directories("/usr/local/include/eigen3")
include_directories(${G2O_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
#include_directories("/usr/include/opencv4")

# IF(G2O_FOUND)
#     message("G2O lib is found:" ${G2O_INCLUDE_DIRS}) 
#     message("G2O lib:" ${G2O_LIBRARIES})
# ENDIF(G2O_FOUND)


# add_executable (${PROJECT_NAME} ${SRC_FILE})
add_executable (${PROJECT_NAME} g2olearning.cpp)

target_link_libraries(CStart
        ${OpenCV_LIBS}
        ${G2O_LIBRARIES})