#include <iostream>
#include <string>
#include <chrono>
#include <thread>

int main() {
	const unsigned int Attempts = 3;

	std::string username, password;
	std::string usernameConfirm, passwordConfirm;

	std::cout << "Insert the username: ";
	std::cin >> username;

	std::cout << "Insert the password: ";
	std::cin >> password;

	std::cout << std::endl;
	std::cout << "Verify the credentials! (3 attempts)." << std::endl;
	std::cout << std::endl;

	while (true) {
		for (unsigned int i = 0; i < Attempts; ++i) {
			std::cout << "Confirm the username: ";
			std::cin >> usernameConfirm;

			std::cout << "Confirm the password: ";
			std::cin >> passwordConfirm;

			std::cout << std::endl;

			if ( (username != usernameConfirm) || (password != passwordConfirm) ) {
				if (i < Attempts - 1) {
					std::cout << "Wrong! Try again." << std::endl;
					std::cout << std::endl;
				}
			}
			else {
				std::cout << "Correct credentials!" << std::endl;
				exit(EXIT_SUCCESS);
			}
		}

		std::cout << "You ran out of attempts! Wait 30 seconds." << std::endl;
		std::cout << std::endl;

		std::chrono::seconds length(30);
		std::this_thread::sleep_for(length);
	}

	return 0;
}