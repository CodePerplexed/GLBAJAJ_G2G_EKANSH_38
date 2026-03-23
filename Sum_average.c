#include <stdio.h>

int main()
{
    int i, a[10], n, sum = 0;
    float average;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

    // Sum of Array Elements
    for(i = 0; i < n; i++)
    {
        sum+= a[i];
    }

    average = sum / 5.0;
    printf("Sum = %d", sum);
    printf("\nAverage = %.2f", average);
    return 0;
}