#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int num{ }; // define variable num as an integer
	std::cin >> num; // get integer value from user's keyboard

	std::cout << "Double " << num << " is: " << num * 2 << '\n'; // multiply number *2 when printing

	std::cout << "Triple " << num << " is: " << num * 3 << '\n'; // multiply number *3 when printing

	return 0;

}

