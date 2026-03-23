#include <stdio.h>

int main()
{
    int i, j, n;
    n = 3;

    // Printing Pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n"); // prints on next line
    }

    return 0;
}