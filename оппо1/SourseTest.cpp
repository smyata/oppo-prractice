#include "gtest/gtest.h"
#include "source.h"

TEST(SourceTokenTest, ValidSource) {
    std::vector<std::string> tokens = { "������", "����", "��������", "100" };
 }

TEST(SourceTokenTest, InvalidSource) {
    std::vector<std::string> tokens = { "������", "����", "��������", "100" };
}