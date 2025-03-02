#include <iostream>

int add(int x, int y);

// Lesson 2.9, Practice calling functions located in another file
int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}