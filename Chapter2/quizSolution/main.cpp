#include "io.h"

//Read two numbers from user, and output the addtion of the two number 
int main()
{

    int a{ readNumber()};
    int b{ readNumber() };

    writeAnswer(a + b);

    return 0;
}

