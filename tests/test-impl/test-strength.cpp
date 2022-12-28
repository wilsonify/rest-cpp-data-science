#include <gtest/gtest.h>
#include "gmock/gmock-matchers.h"
#include "dspack.h"
#include "nlohmann/json.hpp"
#include "run-strength.h"

TEST(test_strength, test_strength01)
{
    std::string input_str = R"({"actual":25,"expected":50})";
    std::string expected_str = R"({"actual":25,"expected":50,"result":0.5})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_strength(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_strength, test_strength02)
{
    std::string input_str = R"({"actual":-25,"expected":50})";
    std::string expected_str = R"({"actual":-25,"expected":50,"result":-0.5})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_strength(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_strength, test_strength03)
{
    std::string input_str = R"({"actual":100.0,"expected":100.0})";
    std::string expected_str = R"({"actual":100,"expected":100,"result":1.0})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_strength(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_strength, test_strength04)
{
    std::string input_str = R"({"actual":44944.0,"expected":50000.0})";
    std::string expected_str = R"({"actual":44944,"expected":50000,"result":0.9})";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_strength(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_strength_vector, test_strength_vector01)
{
    std::string input_str = R"({"actual":[1, 4, 9, 16, 25],"expected":[25, 25, 25, 25, 25]})";
    std::string expected_str = R"({
    "actual":[1, 4, 9, 16, 25],
    "expected":[25, 25, 25, 25, 25],
    "result":[0.04, 0.16, 0.36, 0.64, 1.0]
    })";
    nlohmann::json expected_json = nlohmann::json::parse(expected_str);
    nlohmann::json input_json = nlohmann::json::parse(input_str);
    nlohmann::json result_json = run_strength(input_json);
    EXPECT_EQ(result_json, expected_json);
}