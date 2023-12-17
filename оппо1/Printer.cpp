#include <iostream>
#include "Printer.h"
#include "Date.h"   
#include "Source.h"
#include "Sum.h"
#include "tokenizer.h"

void PrintIncomeInfo(const std::vector<std::string>& tokens, const Income& income) {
    std::cout << "Объект: " << tokens[0] << std::endl;
    std::cout << "Детали:" << std::endl;
    std::cout << DateToken(tokens) << std::endl;
    std::cout << SourceToken(tokens) << std::endl;
    std::cout << SumToken(tokens) << std::endl;
}