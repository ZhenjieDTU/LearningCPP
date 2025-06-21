#include <iostream>             //for std::cout 

//function asks a user to input an integer 


int doubleNumber(int x);    //This is a forward declaration of function to tell the compiler the function doubleNumber(int x) exists 
int add(int x, int y);      //This is also a forward declaration. The function add(int, int) was implemented/defined in a separate file: Add.cpp
int getValueFromUser();

//definition of user-defined function main()
int main()
{
    int x{ getValueFromUser() };
    int y{ getValueFromUser() };

    std::cout << x << " + " << y << " = " << x + y << '\n';
    std::cout << x << " doubled " << "is " << doubleNumber(x) << '\n';
    std::cout << x << " + " << y << " = " << add(x, y) << '\n';
   
    return 0;
}

//Definition of function doubleNumber(int x)
int doubleNumber(int x)
{
    return x * 2;
}