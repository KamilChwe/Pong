#Setup the CMAKE version and the project
cmake_minimum_required(VERSION 3.10)
project(PongGame)

# Define the C++ standard to use in the project
set(CMAKE_CXX_STANDARD 11)

# Find SFML libraries
find_package(SFML 2.6.1 COMPONENTS graphics window system REQUIRED)
# Include the libraries
include_directories(${SFML_INCLUDE_DIR})

# Point to the source code file(s)
set(SOURCE_FILES main.cpp)

# Created an executable from the source file(s)
add_executable(PongGame ${SOURCE_FILES})

# Link the SFML libraries
target_link_libraries(PongGame sfml-graphics sfml-window sfml-system)