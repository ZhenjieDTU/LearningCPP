#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Input an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void writeAnswer(int answer)
{
    std::cout << "The addition of the two numbers is: " << answer << '\n';
}
