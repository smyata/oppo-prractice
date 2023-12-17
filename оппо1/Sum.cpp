#include <iostream>
#include "sum.h"

std::string SumToken(const std::vector<std::string>& tokens) {
    int sum = std::stoi(tokens[3]);   
    if (sum>0) {
        std::cout << "Сумма: " << sum << std::endl;
    } else { return "Сумма неверна. Введите положительное значение."; } 
}