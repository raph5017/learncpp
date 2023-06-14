# include <iostream> //for std::cout

//Definition of user-defined function doPrint()
void doPrint() //doPrint() is the called function in the example
{
	std::cout << "In doPrint()\n";
}

// Definition of function main()
int main()
{
	std::cout << "Starting main()\n";
	doPrint();
	std::cout << "Ending main()\n";

	return 0;
}