
#include <gtest/gtest.h>
#include "gmock/gmock-matchers.h"
#include "dspack.h"
#include "nlohmann/json.hpp"
#include <string>
#include "run-my-sqrt.h"

TEST(test_mysqrt, test_mysqrt01)
{
    nlohmann::json input_json;
    nlohmann::json result_json;
    std::string expected_str;
    nlohmann::json expected_json;
    expected_str = R"({"result": 5.0, "x": 25.0})";
    expected_json = nlohmann::json::parse(expected_str);    
    input_json["x"] = 25.0;
    result_json = run_my_sqrt(input_json);
    EXPECT_EQ(result_json, expected_json);
}

TEST(test_mysqrt, test_mysqrt02)
{
    double result;
    result = mysqrt(-25.0);
    EXPECT_EQ(0.0, result);
}

TEST(test_mysqrt, test_mysqrt03)
{
    double result;
    result = mysqrt(100.0);
    EXPECT_EQ(10.0, result);
}

TEST(test_mysqrt, test_mysqrt04)
{
    double result;
    result = mysqrt(44944.0);
    result = round(result, 2);
    EXPECT_EQ(212.03, result);
}

TEST(test_mysqrt, test_mysqrt05)
{
    std::vector<double> result;
    result = mysqrt_vector({1, 4, 9, 16, 25});
    EXPECT_THAT(result, testing::ElementsAre(1, 2, 3, 4, 5));
}