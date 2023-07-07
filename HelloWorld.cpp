/* 

# include <iostream> //for std::cout

int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

int main()
{
	int x{ getValueFromUser() };
	int y{ getValueFromUser() };

	std::cout << x << " + " << y << " is " << x + y << '\n';

	return 0;
}

*/
#include "add.h"

int add(int x, int y)
{
	return x + y;
}