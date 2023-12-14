#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>


struct Income {
	std::string datestring;
	std::string source;
	int sum;
};
int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Введите описание: ";
	std::string input;
	std::getline(std::cin, input);
	std::vector<std::string> tokens;
	std::string delimiter = " ";
	size_t pos = 0;
	while ((pos = input.find(delimiter)) != std::string::npos) {
		std::string token = input.substr(0, pos);
		tokens.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	tokens.push_back(input);

	Income income;
	income.datestring = tokens[1];
	income.source = tokens[2];
	income.sum = std::stoi(tokens[3]);

	int day = stoi(income.datestring.substr(0, 2));
	int month = stoi(income.datestring.substr(3, 5));
	int year = stoi(income.datestring.substr(6, 8));

	if (income.datestring[2] == '.' && income.datestring[5] == '.') {
		if (day >= 01 && day <= 31 && 
			month >= 01 && month <= 12 && 
			year >= 1900 && year <= 2023) {
			    std::cout << "Объект: " << tokens[0] << std::endl;
			    std::cout << "Свойства:" << std::endl;
			    std::cout << "Дата: " << income.datestring << std::endl;
			    std::cout << "Источник: " << income.source << std::endl;
			    std::cout << "Сумма: " << income.sum << std::endl;
		} else { 
			std::cout << "Дата неверна. Введите DD.MM.YYYY.\n" << std::endl; }
	} else { 
		std::cout << "Дата неверна. Введите DD.MM.YYYY.\n" << std::endl; }
	return 0;
}