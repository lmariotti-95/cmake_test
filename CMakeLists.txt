cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Set Debug as the default build type if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Build type" FORCE)
endif()

if(NOT CMAKE_BUILD_PARALLEL_LEVEL)
    set(CMAKE_BUILD_PARALLEL_LEVEL 4 CACHE STRING "Number of parallel jobs for build" FORCE)
endif()

# Add the user/src directory
add_subdirectory(user)

# Create the main executable
add_executable(my_program main.c)

# Link the user library to the main program
target_link_libraries(my_program my_library)
