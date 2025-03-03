#include "add.h"
#include <iostream>

// Lesson 2.11
int getInteger();

int main()
{
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << add(x,y) << '\n';
	return 0;
}
