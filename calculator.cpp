#include <iostream>
#include <limits>
#include "calculator.h"

char symbol;
int number1, number2;
bool repeat = true;

void test_calculator_if_else()
{
	bool valid_entrace();
	while (repeat)
	{
		std::cout << "Insert number1, symbol of the operation math, number2 and Enter" << "\n";
		std::cin >> number1 >> symbol >> number2;
		if (valid_entrace())

		{ 
			if (symbol == '+')
			std::cout << "Sum:" << number1 + number2 << "\n";
			else if (symbol == '-')
			std::cout << "Sub:" << number1 - number2 << "\n";
			else if (symbol == '*')
			std::cout << "Mult:" << number1 * number2 << "\n";
			else if (symbol == '/')
			std::cout << "Div:" << number1 / number2 << "\n";
		else
			std::cout << "Invalid Operator";
		std::cout << "Try again? (0) finish, (1) continue:";
		std::cin >> repeat;

		if (!valid_entrace())
			repeat = false;
		}

	}

	
}
void test_calculator_switch()
{
	bool valid_entrace();

	while (repeat)
	{ 
	std::cout << "Insert number1, symbol of the operation math, number2 and Enter" << "\n";
	std::cin >> number1 >> symbol >> number2;
	if (valid_entrace())
	{
		switch (symbol)
		{
		case '+':
			std::cout << "Sum:" << number1 + number2 << "\n";
			break;
		case '-':
			std::cout << "Sub:" << number1 - number2 << "\n";
			break;
		case '*':
			std::cout << "Mult:" << number1 * number2 << "\n";
			break;
		case '/':
			std::cout << "Div:" << number1 / number2 << "\n";
			break;
		default:
			std::cout << "Invalid Operator" << "\n";
		}
		std::cout << "Try again? (0) finish, (1) continue:";
	    std::cin >> repeat;
		if (!valid_entrace())
			repeat = false;
    	}

	}
	
}

bool valid_entrace()
{
	if (std::cin.fail())
	{
		std::cout << "Wrong Values ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
			return false;

	}
	return true;
}