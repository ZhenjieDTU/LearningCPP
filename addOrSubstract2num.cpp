#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int num{};                  //define variable num as an integer variable 
    std::cin >> num;            // Read input from keyboard 

    std::cout << "Enter another integer: ";
    int num2{};
    std::cin >> num2;

    std::cout << num << " + " << num2 << " is " << num + num2 << ".\n";
    std::cout << num << " - " << num2 << " is " << num - num2 << ".\n";

    return 0;
}

