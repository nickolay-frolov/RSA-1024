#include <iostream>
#include <fstream>

int main() {
	const int bufferSize = 1024;
	char buffer[bufferSize];

	std::string path("..\\..\\..\\file.txt");

	std::ifstream file(path, std::ios::binary);

	if(!file.is_open()) {
		std::cout << "Unable to open file" << std::endl;
		return 1;
	}

	std::streamsize butesRead = 0;
	do {
		file.read(buffer, bufferSize);
		butesRead = file.gcount();
		std::cout.write(buffer, butesRead);
	} while (butesRead == bufferSize);

	file.close();

	return 0;
}