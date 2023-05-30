cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

# Set project name and version
project(window VERSION 0.1)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# Enable debug symbols by default
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug 
    CACHE STRING 
      "Choose the type of build (Debug or Release)" FORCE)
endif()

include(CTest)
enable_testing()

# Find SFML shared libraries
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

add_executable(window main.cpp)

target_link_libraries(window PUBLIC sfml-window sfml-graphics)

# Set executable install location
install(TARGETS window DESTINATION bin)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

