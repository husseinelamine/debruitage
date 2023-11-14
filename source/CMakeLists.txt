# Add include directories of the project
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include/")

# Add all the cpp sources of the src directory
file(GLOB TP_TOOLS_SRC "${CMAKE_CURRENT_SOURCE_DIR}//src/*.cpp")
set(CLI_TOOLS_SRC "${CMAKE_CURRENT_SOURCE_DIR}/src/cli_tools.cpp")

# Loop through all cpp files in the app directory
# In order to create an executable for each of them

# Use it as the name of the generated executable
# The executable requires the current main cpp file (CURR_MAIN_SRC), the cli_tools and the tool files (${${EXECUTABLE_NAME}_SOURCE_LIST})
add_executable(${PROJECT_NAME} main.cpp)

# Links the executable with the required libraries
target_link_libraries(${PROJECT_NAME} ${LINK_EXTERNAL_LIBRARIES})