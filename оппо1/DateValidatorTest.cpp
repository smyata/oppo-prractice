#include <gtest/gtest.h>
#include "dateValidator.h"

// Тест для корректной даты
TEST(DateValidatorTest, ValidDate) {
    DateValidator dateValidator;
    EXPECT_TRUE(dateValidator.IsValidDate("01.12.2022"));
    EXPECT_TRUE(dateValidator.IsValidDate("31.01.2023"));
    EXPECT_TRUE(dateValidator.IsValidDate("15.06.2023"));
}

// Тест для некорректной даты (неверный формат)
TEST(DateValidatorTest, InvalidDateFormat) {
    DateValidator dateValidator;
    EXPECT_FALSE(dateValidator.IsValidDate("2022-12-01"));
    EXPECT_FALSE(dateValidator.IsValidDate("12/01/2022"));
    EXPECT_FALSE(dateValidator.IsValidDate("01-12-2022"));
}

// Тест для некорректной даты (некорректный день)
TEST(DateValidatorTest, InvalidDay) {
    DateValidator dateValidator;
    EXPECT_FALSE(dateValidator.IsValidDate("00.12.2022"));
    EXPECT_FALSE(dateValidator.IsValidDate("32.01.2023"));
    EXPECT_FALSE(dateValidator.IsValidDate("33.01.2023"));
}

// Тест для некорректной даты (некорректный месяц)
TEST(DateValidatorTest, InvalidMonth) {
    DateValidator dateValidator;
    EXPECT_FALSE(dateValidator.IsValidDate("15.00.2022"));
    EXPECT_FALSE(dateValidator.IsValidDate("10.13.2022"));
}

// Тест для некорректной даты (некорректный год)
TEST(DateValidatorTest, InvalidYear) {
    DateValidator dateValidator;
    EXPECT_FALSE(dateValidator.IsValidDate("01.12.1899"));
    EXPECT_FALSE(dateValidator.IsValidDate("01.01.10000"));
}
