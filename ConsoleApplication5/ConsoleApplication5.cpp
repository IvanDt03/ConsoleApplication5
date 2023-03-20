#include <iostream>
#include "Header.h"

int main()
{
	int a = 5;
	std::cout << a;
	std::cout << std::endl;
	std::cout << "Hello World" << std::endl;

	foo(a);

	std::cout << a;
	std::cout << std::endl;
	std::cout << "Hello World" << std::endl;

	foo(a);


}


