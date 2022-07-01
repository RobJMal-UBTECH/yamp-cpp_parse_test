cmake_minimum_required(VERSION 3.10)
project(YAML_PARSE_TEST)
add_compile_options(-std=c++11)

# if(YAMLCPP_STATIC_LIBRARY)
#     set(YAMLCPP_STATIC libyaml-cpp.a)
# endif()

find_package(yaml-cpp REQUIRED)

set(PCL_BUILD_TYPE Release)

add_executable(yaml_parse_test main.cpp)

target_link_libraries(
    yaml_parse_test
    yaml-cpp
)
