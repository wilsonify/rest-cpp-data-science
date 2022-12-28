cmake_minimum_required (VERSION 3.2)
project(rest-cpp-data-science)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pg -g3" )

set(VERSION_MAJOR 1)
set(VERSION_MINOR 0)
set(VERSION_PATCH 1)

set(CMAKE_EXPORT_COMPILE_COMMANDS true)

# build header only library
include_directories(external/json/include)

# build rapidjson
set(RAPIDJSON_BUILD_DOC OFF) # Build rapidjson documentation
set(RAPIDJSON_BUILD_EXAMPLES OFF) # Build rapidjson examples
set(RAPIDJSON_BUILD_TESTS OFF) # Build rapidjson perftests and unittests
set(RAPIDJSON_BUILD_THIRDPARTY_GTEST OFF) # Use gtest installation in `thirdparty/gtest` by default if available
include_directories(external/rapidjson/include)
add_subdirectory(external/rapidjson)

#build the rest runner
set(PISTACHE_BUILD_TESTS OFF) # build tests alongside the project
set(PISTACHE_ENABLE_FLAKY_TESTS OFF) # "if tests are built, also run ones that are known to be flaky"
set(PISTACHE_ENABLE_NETWORK_TESTS OFF) # if tests are built, run ones needing network access
set(PISTACHE_USE_SSL OFF) # add support for SSL server
set(PISTACHE_BUILD_FUZZ OFF) # Build fuzzer for oss-fuzz
include_directories(external/pistache/include)
add_subdirectory(external/pistache)
link_directories(external/pistache/build/src)

#build a shared library
include_directories(external/base-cpp-data-science/include)
include_directories(external/base-cpp-data-science/dspack)
FILE(GLOB dspackSources external/base-cpp-data-science/dspack/*.cpp)
add_library(dspack SHARED ${dspackSources})
link_directories(${CMAKE_CURRENT_BINARY_DIR})

# build the main
include_directories(model)
include_directories(api)
include_directories(impl)

file(GLOB SRCS 
${CMAKE_CURRENT_SOURCE_DIR}/model/*.cpp
${CMAKE_CURRENT_SOURCE_DIR}/api/*.cpp
${CMAKE_CURRENT_SOURCE_DIR}/impl/*.cpp
${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(rest-cpp-data-science ${SRCS}) 
target_link_libraries(rest-cpp-data-science pistache pthread dspack)

# build as a library to facilitate testing
include_directories(runner)
include_directories(include)
file(GLOB runnerSRCS ${CMAKE_CURRENT_SOURCE_DIR}/runner/*.cpp)
add_library(runner-library SHARED ${runnerSRCS})
link_directories(${CMAKE_CURRENT_BINARY_DIR})

# build tests
include_directories(external/googletest/googletest/include)
include_directories(external/googletest/googlemock/include)
add_subdirectory(external/googletest)
link_directories(external/googletest/build/lib)

file(GLOB TESTSRCS ${CMAKE_CURRENT_SOURCE_DIR}/tests/test-impl/*.cpp)
add_executable(test-impl ${TESTSRCS})
target_link_libraries(test-impl gtest_main gtest gmock dspack runner-library)

# run tests
enable_testing()
add_test(run-test-impl test-impl)
