#include "add.h"
#include "getInteger.h"
#include <iostream>

// Lesson 2.12
int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << add(x,y) << '\n';
	return 0;
}
