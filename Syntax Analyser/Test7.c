#include <stdio.h>
int main()
{
    int i, j;
    i = 0;
    j = 0;
    i = i++ j;
    return 0;
}

/*
TEST CASE 7
*/

// This test case has a misuse of operators
// Increment operator is a unary operation.
// Here, it is used with two operands.

// FAIL - LINE NO. 6