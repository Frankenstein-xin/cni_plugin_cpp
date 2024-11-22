cmake_minimum_required(VERSION 3.5.0)
project(cni_plugin_cpp VERSION 0.1.0 LANGUAGES C CXX)

set(CPM_DOWNLOAD_VERSION 0.40.2) 
set(CPM_DOWNLOAD_LOCATION "${CMAKE_BINARY_DIR}/cmake/CPM_${CPM_DOWNLOAD_VERSION}.cmake")

if(NOT (EXISTS ${CPM_DOWNLOAD_LOCATION}))
    message(STATUS "Downloading CPM.cmake")
    file(DOWNLOAD https://github.com/TheLartians/CPM.cmake/releases/download/v${CPM_DOWNLOAD_VERSION}/CPM.cmake ${CPM_DOWNLOAD_LOCATION})
endif()

include(${CPM_DOWNLOAD_LOCATION})

CPMAddPackage(
    NAME nlohmann_json
    GITHUB_REPOSITORY nlohmann/json
    VERSION 3.11.3)
    
add_executable(cni_plugin_cpp main.cpp)

target_link_libraries(cni_plugin_cpp nlohmann_json::nlohmann_json)


