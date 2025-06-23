#include "Add.h"                //include the header file 
#include "input.h"                //include the header file 
#include <iostream>             //#include directive, to replace this line with the content in <iostream> file, such as for std::cout 

int doubleNumber(int x);		//Forward declaration, Multiply the number x by 2, defined in Ch2.cpp

//definition of user-defined function main()
int main()
{
    int x{ getValueFromUser() };
    int y{ getValueFromUser() };

    std::cout << x << " doubled " << "is " << doubleNumber(x) << '\n';          //Use explicit namespace prefixes, such as std::, avoid using-directives
    std::cout << x << " + " << y << " = " << add(x, y) << '\n';
   
    return 0;
}

//Definition of function doubleNumber(int x)
int doubleNumber(int x)
{
    return x * 2;
}