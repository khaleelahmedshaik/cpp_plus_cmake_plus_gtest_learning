cmake_minimum_required(VERSION 3.14)

#set(CMAKE_CXX_COMPILER CXX)
#set(CMAKE_C_COMPILER CC)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  stock00_test
  stock00_test.cc
)
############## Added by me ############
add_library(
  stock00
  stock00.cc
)
#######################################
target_link_libraries(
  stock00_test
  stock00
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(stock00_test)
