cmake_minimum_required (VERSION 2.8) #最低要求的CMake版本
project(CStart) # 项目名称
set(CMAKE_BUILD_TYPE "Debug")

file(GLOB SRC_FILE *.cpp) # 建立变量SRC_FILE为目录下.c文件列表

find_package(Eigen3 REQUIRED)
find_package(g2o REQUIRED)

include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(${G2O_INCLUDE_DIRS})

add_executable (${PROJECT_NAME} ${SRC_FILE}) # 要求编译可执行文件