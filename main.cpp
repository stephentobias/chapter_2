#include <iostream>


int doubleNumber(int num);


// Lesson 2.4, Question 5: Write a complete program that reads an integer from the user, 
//   doubles it using the doubleNumber() function you wrote in the previous quiz 
//   question, and then prints the doubled value out to the console.
int main()
{
	std::cout << "Enter an integer: ";
	int user_input{ };
	std::cin >> user_input;

	std::cout << "Double " << user_input << " is: " << doubleNumber(user_input) << '\n';
	return 0;
}

int doubleNumber(int num)
{
	return num * 2;
}