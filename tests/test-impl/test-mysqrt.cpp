
#include <gtest/gtest.h>
#include "gmock/gmock-matchers.h"
#include "dspack.h"
#include "nlohmann/json.hpp"
#include <string>
#include "run-my-sqrt.h"

TEST(test_mysqrt, test_mysqrt01)
{
    std::string input_str = R"({"x": 25.0})";
    std::string expected_str = R"({"result": 5.0, "x": 25.0})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_my_sqrt(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_mysqrt, test_mysqrt02)
{
    std::string input_str = R"({"x": -25.0})";
    std::string expected_str = R"({"result": 0.0, "x": -25.0})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_my_sqrt(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_mysqrt, test_mysqrt03)
{
    std::string input_str = R"({"x": 100.0})";
    std::string expected_str = R"({"result": 10.0, "x": 100.0})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_my_sqrt(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_mysqrt, test_mysqrt04)
{
    std::string input_str = R"({"x": 44944.0})";
    std::string expected_str = R"({"result": 212.03, "x": 44944.0})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_my_sqrt(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_mysqrt, test_mysqrt05)
{
    std::string input_str = R"({"x": [1, 4, 9, 16, 25]})";
    std::string expected_str = R"({"result": [1, 2, 3, 4, 5], "x": [1, 4, 9, 16, 25]})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_my_sqrt(input_json);
    EXPECT_EQ(result_json, expected_json);
}