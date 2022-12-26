#include <gtest/gtest.h>
#include "gmock/gmock-matchers.h"
#include "dspack.h"
#include "nlohmann/json.hpp"
#include "run-strength.h"

TEST(test_strength, test_strength01)
{
    nlohmann::json input_json;
    nlohmann::json result_json;
    std::string expected_str;
    nlohmann::json expected_json;
    expected_str = R"({"actual":25,"expected":50,"result":0.5})";
    expected_json = nlohmann::json::parse(expected_str);
    input_json["expected"] = 50.0;
    input_json["actual"] = 25.0;
    result_json = run_strength(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_strength, test_strength02)
{
    double result;
    result = strength(-25.0, 20.0);
    result = round(result, 1);
    EXPECT_EQ(-1.2, result);
}

TEST(test_strength, test_strength03)
{
    double result;
    result = strength(100.0, 100.0);
    result = round(result, 1);
    EXPECT_EQ(1.0, result);
}

TEST(test_strength, test_strength04)
{
    double result;
    result = strength(44944.0, 50000.0);
    result = round(result, 2);
    EXPECT_EQ(0.9, result);
}

TEST(test_strength_vector, test_strength_vector01)
{
    std::vector<double> result;
    result = strength_vector({1, 4, 9, 16, 25}, {25, 25, 25, 25, 25});
    EXPECT_THAT(result, testing::ElementsAre(0.04, 0.16, 0.36, 0.64, 1.0));
}