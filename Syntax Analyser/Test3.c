#include <stdio.h>
int main()
{
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int k[10];
    int sum = 0;
    int product = 1;
    for (int j = 0; j < 10; j++)
    {
        sum += j;
        if (j != 0)
        {
            product *= j;
        }
        printf("%d ", j);
    }
    printf("Sum : %d\n", sum);
    printf("Product : %d\n", product);
}

/*
TEST CASE 3
*/

// Program to find product and sum of numbers.
// This deals with array declaration and array initialization also.

// PASS
