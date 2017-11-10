# Specify the minimum CMAKE version required
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
cmake_policy(VERSION 3.1)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

set(NAME LoupGarouExia)

# Your project's name
project(${NAME})

# Make your header file accessible to the compiler


# Debug flags
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -W4")
if(CMAKE_COMPILER_IS_GNUCXX)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wextra -Wundef")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
endif(CMAKE_COMPILER_IS_GNUCXX)

# Add all files from the source/ folder to CMake
file(GLOB_RECURSE SRC
    "src/*.cpp"
    "src/*.h"
    "src/*.hpp"
)

file(GLOB_RECURSE SRC_BEGIN
    "src/begin/*.cpp"
    "src/begin/*.h"
    "src/begin/*.hpp"
)

file(GLOB_RECURSE SRC_INOUT
    "src/inOut/*.cpp"
    "src/inOut/*.h"
    "src/inOut/*.hpp"
)

file(GLOB_RECURSE SRC_ROLESDISTRIBUTION
    "src/rolesDistribution/*.cpp"
    "src/rolesDistribution/*.h"
    "src/rolesDistribution/*.hpp"
)

file(GLOB_RECURSE SRC_PLAYER
    "src/player/*.cpp"
    "src/player/*.h"
    "src/player/*.hpp"
)

file(GLOB_RECURSE SRC_TIME
    "src/time/*.cpp"
    "src/time/*.h"
    "src/time/*.hpp"
)

# Define the executable
add_executable(${PROJECT_NAME} ${SRC})

source_group("Begin" FILES ${SRC_BEGIN})
source_group("InOut" FILES ${SRC_INOUT})
source_group("RolesDistribution" FILES ${SRC_ROLESDISTRIBUTION})
source_group("Player" FILES ${SRC_PLAYER})
source_group("Time" FILES ${SRC_TIME})

# Enable C++ 14
if (NOT UNIX)
	set_target_properties(${PROJECT_NAME} PROPERTIES
	    CXX_STANDARD 14
	    CXX_STANDARD_REQUIRED ON
	    CXX_EXTENSIONS OFF
	)
else()
	add_definitions(-std=c++14)
endif()

