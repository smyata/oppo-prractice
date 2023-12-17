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

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "������� ����������: ";
	std::string input;
	std::getline(std::cin, input);
	std::vector<std::string> tokens = TokenizeInput(input, " ");

	if (tokens.size() > 0 && tokens[0] == "������") {
	    Income income = InitializeIncome(tokens);
	    PrintIncomeInfo(tokens, income);
	} else {std::cout << "��������������: ��������� ����� '������'.\n" << std::endl;}
	return 0;
}