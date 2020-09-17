#include <stdio.h>
int main()
{
    int i;
    i = 0;
    while (i < 5)
    {
        int j;
        if (i % 2 == 0)
        {
            int k;
            printf("Value : %d\n", (i + 1));
        }
        i++;
    }
    printf("Loop Finished.");
    return 0;
}

/*
TEST CASE 2
*/

// This test case deals with a nested if inside a while loop.
// It is to demonstrate the nesting levels.

// PASS