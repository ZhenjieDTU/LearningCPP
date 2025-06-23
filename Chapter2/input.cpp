#include "input.h"                //include the header file 
#include <iostream>


//Get an integer from user and return the value, function definition 
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}