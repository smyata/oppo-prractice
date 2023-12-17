#include "gtest/gtest.h"
#include "Sum.h"

TEST(SumTest, ValidSum) {
    std::vector<std::string> tokens = { "������", "����", "��������", "100" };
    EXPECT_TRUE(IsValidSum(tokens));
}

TEST(SumTest, ZeroSum) {
    std::vector<std::string> tokens = { "������", "����", "��������", "0" };
    EXPECT_FALSE(IsValidSum(tokens));
}

TEST(SumTest, NegativeSum) {
    std::vector<std::string> tokens = { "������", "����", "��������", "-50" };
    EXPECT_FALSE(IsValidSum(tokens));
}

TEST(SumTest, NonNumericSum) {
    std::vector<std::string> tokens = { "������", "����", "��������", "abc" };
    EXPECT_FALSE(IsValidSum(tokens));
}