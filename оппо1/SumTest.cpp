#include "gtest/gtest.h"
#include "Sum.h"

TEST(SumTest, ValidSum) {
    std::vector<std::string> tokens = { "доходы", "дата", "источник", "100" };
    EXPECT_TRUE(IsValidSum(tokens));
}

TEST(SumTest, ZeroSum) {
    std::vector<std::string> tokens = { "доходы", "дата", "источник", "0" };
    EXPECT_FALSE(IsValidSum(tokens));
}

TEST(SumTest, NegativeSum) {
    std::vector<std::string> tokens = { "доходы", "дата", "источник", "-50" };
    EXPECT_FALSE(IsValidSum(tokens));
}

TEST(SumTest, NonNumericSum) {
    std::vector<std::string> tokens = { "доходы", "дата", "источник", "abc" };
    EXPECT_FALSE(IsValidSum(tokens));
}