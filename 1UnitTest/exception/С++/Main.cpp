#include <iostream>
#include <exception>

int main() {
	try {
		std::cout << "Enter first number ";
		double num1;
		std::cin >> num1;

		std::cout << "Enter second number ";
		double num2;
		std::cin >> num2;

		if (num2 == 0) {
			std::cout << "You can't divide by zero";
		}
		else {
			double res = num1 / num2;
			std::cout << res;
		}
	}
	catch(const std::exception& err){
		std::cout << "Invalid input";
	}


	return 0;
}
