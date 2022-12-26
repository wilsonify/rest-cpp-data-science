#include <gtest/gtest.h>
#include "gmock/gmock-matchers.h"
#include "dspack.h"

TEST(test_mysqrt, test_mysqrt01)
{
    Sqrt_input sqrt_input;
    sqrt_input.setX(25.0);
    Pistache::Http::ResponseWriter response_writer;
    MysqrtApiImpl::sqrt(const Sqrt_input &sqrtInput, Pistache::Http::ResponseWriter &response)

    double result;
    result = mysqrt(25.0);
    EXPECT_EQ(5.0, result);
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