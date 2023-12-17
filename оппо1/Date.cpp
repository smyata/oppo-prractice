#include <iostream>
#include "dateValidator.h"
#include "date.h"

std::string DateToken(const std::vector<std::string>& tokens) {
    std::string date = tokens[1];
    DateValidator dateValidator;
    if (dateValidator.IsValidDate(date)) {
        return "����: " + date;
    } else {return "������������ ����. ������� DD.MM.YYYY.";}
}