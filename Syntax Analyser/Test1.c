#include <stdio.h>
struct node
{
    int val;
};

int main()
{
    int i, j;
    i = 0;
    j = 0;
    i = j * j + j / j;
    while (i < 5)
    {
        printf("Value : %d\n", (i + 1));
        i += 2;
    }
    printf("Loop Finished.");
    return 0;
}

/*
TEST CASE 1
*/

// Includes all basic operations.
// Variable declarations, initializations, main method, header file inclusion, printing, and a while loop construct, and a struct.
// Includes the basic arithmetic operations also.

// PASS