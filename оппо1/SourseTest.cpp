#include "gtest/gtest.h"
#include "source.h"

TEST(SourceTokenTest, ValidSource) {
    std::vector<std::string> tokens = { "доходы", "дата", "зарплата", "100" };
 }

TEST(SourceTokenTest, InvalidSource) {
    std::vector<std::string> tokens = { "доходы", "дата", "неверный", "100" };
}