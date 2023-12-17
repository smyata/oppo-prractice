#include <iostream>
#include "source.h"

std::string SourceToken(const std::vector<std::string>& tokens) {
    std::string source = tokens[2];
    if (source == "зарплата" || source == "бонус" || source == "премия") {
        return "Источник: " + source;
} else {return "Источник неверен. Введите: зарплата, бонус или премия.";}
}