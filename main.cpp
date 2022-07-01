#include <iostream>
#include <yaml-cpp/yaml.h>

int main()
{
    // Need to go one directory up (relative to executable)
    YAML::Node config = YAML::LoadFile("../test.yaml");

    const std::string somDoe = config["doe"].as<std::string>();
    const std::string somRay = config["ray"].as<std::string>();
    const float piValue = config["pi"].as<float>();

    std::cout << somDoe << std::endl;
    std::cout << somRay << std::endl;
    std::cout << piValue << std::endl;

    return 0;
}