//
// RSAUtils.hpp
// RSA Encryption System
//
// Created by ������� ������ on 4/13/24
// Copyright (c) 2024 ������� ������
//

#include <cmath>
#include <vector>

#ifndef RSAUTILS_H
#define RSAUTILS_H

class RSAUtils
{
public:
	static long long GenerateNumber(int length);
	static bool IsPrimary(long long& number);
private:

};

#include "..\\src\\RSAUtils.cpp"

#endif;