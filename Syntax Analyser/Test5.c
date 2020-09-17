#include <stdio.h>
int main()
{
    for (i = 0; i < 6; i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");
}

/*
TEST CASE 5
*/

// In this testcase, the syntax is correct.
// However, there are a few semantic errors that our parser does not identify.
// The variable i is not declared and the main function does not have a return value despite the return_type 'int' specified.

// PASS