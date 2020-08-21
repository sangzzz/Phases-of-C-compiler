// Test Case 1
/*
Test Case 1
            */
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
/* Program End */

// Tests whether all the basic things are working properly
// Single-line comments, Multi-line Comments, keywords, identifiers,
//  constants and seperators recognition has been implemented.