#include <stdio.h>

int main()
{
    int i, j, n;
    n = 3;

    // Printing Pattern
    for(i = 0; i < n; i++)
    {
        for(j = n - 1; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n"); // prints on next line
    }

    return 0;
}