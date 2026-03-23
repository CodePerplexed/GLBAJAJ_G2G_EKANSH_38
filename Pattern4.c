#include <stdio.h>

int main()
{
    int i, j, n, a = 1;
    n = 3;

    // Printing Pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("%d ", a++);
        }
        printf("\n"); // prints on next line
    }

    return 0;
}