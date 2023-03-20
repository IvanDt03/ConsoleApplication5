#include <iostream>
#include "Header.h"

int main()
{
	int a = 5;
	const int b = 3;
	std::cout << a;
	std::cout << std::endl;
	std::cout << "Hallo World" << std::endl;

	foo(a, b);

	std::cout << a << b;
	std::cout << std::endl;
	std::cout << "Hallo" << std::endl;

	foo(a, b);


}


