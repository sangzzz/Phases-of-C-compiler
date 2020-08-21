#include <stdio.h>
int main()
{
    char *name = "Lexical Analyzer;
        int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    print("Length of the string is : %d\n", length);
}