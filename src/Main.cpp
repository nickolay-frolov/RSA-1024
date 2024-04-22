#include <iostream>
#include <fstream>

#include "..\\include\\RSAUtils.hpp"
#include "..\\include\\RSAKeyGenerator.hpp"

int main() {
	const int bufferSize = 1024;
	char buffer[bufferSize];

	std::string path("..\\..\\..\\file.txt");

	std::ifstream file(path, std::ios::binary);

	if(!file.is_open()) {
		std::cout << "Unable to open file" << std::endl;
		return 1;
	}

	std::streamsize bytesRead = 0;
	do {
		file.read(buffer, bufferSize);
		bytesRead = file.gcount();
		std::cout.write(buffer, bytesRead);
	} while (bytesRead == bufferSize);

	file.close();

	return 0;
}