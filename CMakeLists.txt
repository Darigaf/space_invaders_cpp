cmake_minimum_required(VERSION 3.10)
project(Space_Invaders VERSION 1.0)
set(Space_Invaders_VERSION_MAJOR 1)
set(Space_Invaders_VERSION_MINOR 1)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES
	src/space_invaders.cxx
)
add_executable(space_invaders ${SOURCES})
target_link_libraries(space_invaders ncurses)
target_include_directories(space_invaders PUBLIC "${PROJECT_BINARY_DIR}")
