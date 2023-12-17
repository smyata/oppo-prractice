#include "dateValidator.h"

bool DateValidator::IsValidDate(const std::string& date) {
	int day = std::stoi(date.substr(0, 2));
	int month = std::stoi(date.substr(3, 2));
	int year = std::stoi(date.substr(6, 4));

	return (date[2] == '.' && date[5] == '.' &&
		day >= 1 && day <= 31 &&
		month >= 1 && month <= 12 &&
		year >= 1900 && year <= 2023);	
}

