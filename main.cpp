// User-defined headers
#include "add.h"
#include "getInteger.h"

// Standard libs
#include <iostream>

// Lesson 2.11
int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << add(x,y) << '\n';
	return 0;
}
