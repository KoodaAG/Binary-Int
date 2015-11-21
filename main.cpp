#include <iostream>

#define BITS 16

int main()
{
	int number;
	std::cout << "Enter number: ";
	std::cin >> number;


	// Print out 16 bits
	for (int i = BITS; i >= 0; --i)
	{
		if ((number & 1 << i) == 0)
		{
			std::cout << "0";
		}
		else if ((number & 1 << i) > 0)
		{
			std::cout << "1";
		}
	}

	return 0;
}
