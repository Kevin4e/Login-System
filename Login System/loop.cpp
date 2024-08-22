#include "..\includes\loop.h"

#include <iostream>

void startLoop() {
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Press 'X' button to close the program." << std::endl;

	while (true) {
		std::cin.get();
	}
}