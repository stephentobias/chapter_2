#include "io.h"
#include <iostream>


int readNumber()
{
    std::cout << "Enter a number: ";

    int user_input{ };
    std::cin >> user_input;

    return user_input;
}

void writeAnswer(int number_input)
{
    std::cout << "The sum is: " << number_input << '\n';
}
