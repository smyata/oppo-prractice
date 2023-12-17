#include <iostream>
#include <vector>
#include <string>
#include "sum.h"

bool IsValidSum(const std::vector<std::string>& tokens) {
    try {
        int sum = std::stoi(tokens[3]);
        if (sum > 0) {
            std::cout << "Сумма: " << sum << std::endl;
            return true; 
        } else {
            std::cout << "Сумма неверна. Введите положительное значение." << std::endl;
            return false;}
    }
    catch (const std::exception& e) {
        std::cout << "Ошибка при преобразовании суммы." << std::endl;
        return false;
    }
}