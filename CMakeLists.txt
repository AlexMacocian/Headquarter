cmake_minimum_required(VERSION 3.10)

project(
  Headquarter
  VERSION 1.0
  LANGUAGES C
)

option(ENABLE_TESTING "Build tests" OFF)
option(HQ_ENABLE_TESTING "Build tests" OFF)

# Look for dependencies in the deps directory (if not already in CMAKE_PREFIX_PATH)
if(WIN32)
    set(HQ_DEPS_INSTALL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/deps/Windows")
else()
    set(HQ_DEPS_INSTALL_DIR "${CMAKE_CURRENT_SOURCE_DIR}/deps/Linux")
endif()

if(EXISTS "${HQ_DEPS_INSTALL_DIR}")
    list(APPEND CMAKE_PREFIX_PATH "${HQ_DEPS_INSTALL_DIR}")
    message(STATUS "Headquarter: Using dependencies from ${HQ_DEPS_INSTALL_DIR}")
endif()

find_package(MbedTLS REQUIRED)
find_package(CURL REQUIRED)

add_subdirectory(code)
add_subdirectory(plugins)

if (HQ_ENABLE_TESTING)
  add_subdirectory(tests)
endif()