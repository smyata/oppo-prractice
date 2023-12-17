
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <windows.h>
#include "dateValidator.h"
#include "tokenizer.h"
#include "Date.h"
#include "Source.h"
#include "Sum.h"
#include "Printer.h"
#include <gtest/gtest.h>

int main(int argc, char** argv){

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Инициализация Google Test и запуск тестов
	::testing::InitGoogleTest(&argc, argv);
	//::testing::GTEST_FLAG(filter) = "SourseTest";
	int testResult = RUN_ALL_TESTS();
	
	std::cout << "Введите информацию: ";
	std::string input;
	std::getline(std::cin, input);
	std::vector<std::string> tokens = TokenizeInput(input, " ");

	if (tokens.size() > 0 && tokens[0] == "доходы") {
	    Income income = InitializeIncome(tokens);
	    PrintIncomeInfo(tokens, income);
	} else {std::cout << "Предупреждение: Ожидалось слово 'доходы'.\n" << std::endl;}
	return 0;
}