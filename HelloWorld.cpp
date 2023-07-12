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



#include "square.h"

int getSquareSides()
{
	return 4;
}

int getSquarePerimeter(int sideLength)
{
	return sideLength * getSquareSides();
}

*/


#include <iostream>

int readNumber()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void writeAnswer(int a)
{
	std::cout << "The answer is: " << a << '\n';
}
