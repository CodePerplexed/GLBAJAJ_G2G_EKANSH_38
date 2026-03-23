#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;

    printf("Enter the range 'n'.\n");
    scanf("%d", &n);

    // Sum of Series
    for(i = 1; i <= n; i++)
    {
        sum = (float)sum + (float)1/i;
    }

    printf("Sum = %.2f", sum);
    return 0;
}