//
// RSAUtils.cpp
// Реализация методов объявленных в RSAUtils.hpp
//
// Created by Николай Фролов on 4/13/24
// Copyright (c) 2024 Николай Фролов
//

#include <iostream>
#include <cmath>
#include <ctime>

#include "..\\include\\RSAUtils.hpp"

long long RSAUtils::GenerateNumber(int length) {
	long long number = 0;

	srand(time(NULL));
	number = rand() % (long long)(pow(10, length) - 1) + 1;

	while (!RSAUtils::IsPrimary(number)) {
		number = rand() % (long long)(pow(10, length) - 1) + 1;
	}

	return number;
}

bool RSAUtils::IsPrimary(long long &number)
{
	for (long long i = 2; i <= std::sqrt(number); i++)
		if (number % i == 0)
			return false;

	return true;
}
