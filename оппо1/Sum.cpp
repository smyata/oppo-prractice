#include <iostream>
#include <vector>
#include <string>
#include "sum.h"

bool IsValidSum(const std::vector<std::string>& tokens) {
    try {
        int sum = std::stoi(tokens[3]);
        if (sum > 0) {
            std::cout << "�����: " << sum << std::endl;
            return true; 
        } else {
            std::cout << "����� �������. ������� ������������� ��������." << std::endl;
            return false;}
    }
    catch (const std::exception& e) {
        std::cout << "������ ��� �������������� �����." << std::endl;
        return false;
    }
}