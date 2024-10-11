#Setup the CMAKE version and the project
cmake_minimum_required(VERSION 3.10)
project(PongGame)

# Define the C++ standard to use in the project
set(CMAKE_CXX_STANDARD 11)

# Point to the source code file(s)
set(SOURCE_FILES main.cpp)

# Created an executable from the source file(s)
add_executable(PongGame ${SOURCE_FILES})

## If you want to link SFML statically
set(SFML_STATIC_LIBRARIES TRUE)
# Find SFML libraries
set(SFML_DIR "${CMAKE_SOURCE_DIR}\\..\\SFML-2.6.1\\lib\\cmake\\SFML")
find_package(SFML 2.6.1 COMPONENTS graphics window system REQUIRED)
if(SFML_FOUND)
    # Include the libraries
    include_directories(${SFML_INCLUDE_DIR})
    # Link the SFML libraries
    target_link_libraries(PongGame sfml-graphics sfml-window sfml-system)
endif()
