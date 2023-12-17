#include "tokenizer.h"

std::vector<std::string> TokenizeInput(std::string& input, const std::string& delimiter) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = input.find(delimiter)) != std::string::npos) {
        std::string token = input.substr(0, pos);
        tokens.push_back(token);
        input.erase(0, pos + delimiter.length());
    }
    tokens.push_back(input);
    return tokens;
}
Income InitializeIncome(const std::vector<std::string>& tokens) {
    Income income;
    return income;
}