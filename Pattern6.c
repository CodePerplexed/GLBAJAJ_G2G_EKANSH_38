#include <stdio.h>

int main()
{
    int n;
    char i, j;
    n = 'A' + 3;

    // Printing Pattern
    for(i = 'A'; i < n; i++)
    {
        for(j = 'A'; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n"); // prints on next line
    }

    return 0;
}