cmake_minimum_required(VERSION 3.12)

project(MyProgram)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Add the static library target
add_library(WriteInFile_library STATIC library/WriteInFile.cpp)

# Add the executable target
add_executable(program src/main.cpp src/Print.cpp)

# Link the executable with the library
target_link_libraries(program PRIVATE WriteInFile_library)

# Set the output directory for the executable
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# Install target
install(TARGETS program DESTINATION ${CMAKE_SOURCE_DIR}/bin)


