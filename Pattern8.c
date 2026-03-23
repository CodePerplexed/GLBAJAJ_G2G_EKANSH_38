#include <stdio.h>

int main()
{
    int i, j, n;
    n = 3;

    // Printing Pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= n - 1 - i; j++)
        {
            printf(" ");
        }
        for(j = 0; j < i+1 ; j++)
        printf("* ");
        for(j = 1; j <= n - 1 - i; j++)
        {
            printf(" ");
        }
        printf("\n"); // prints on next line
    }

    return 0;
}