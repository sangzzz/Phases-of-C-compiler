#include <stdio.h>

int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}

int main()
{
    int i;
    int product = 1;
    // Factorial of a number
    for (i = 5; i >= 0; i--)
    {
        product *= factorial(i);
    }
    return 0;
}

/*
TEST CASE 4
*/

// Program to find factorial of a number
// This test case includes a call-by-value function and recursive calls also.

// PASS