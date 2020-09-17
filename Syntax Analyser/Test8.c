#include <stdio.h>
int factorial(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}
int main()
{
    int arr[10] = [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 ];
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", factorial(arr[i]));
    }
    printf("\n");
    return 0;
}

/*
TEST CASE 8
*/

// This test case has an invalid array initialization.
// < [] > is used instead of < { } >

// FAIL -> LINE NO. 11