#pragma once

#include <string>
#include <vector>

struct Income {
	std::string datestring;
	std::string source;
	int sum;
};

std::vector<std::string> TokenizeInput(std::string& input, const std::string& delimiter);
Income InitializeIncome(const std::vector<std::string>& tokens);
