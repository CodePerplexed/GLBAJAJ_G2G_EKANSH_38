#include <stdio.h>

int main()
{
    int i, a[10], n, max;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

    max = a[0];
    // Finds Max of all Array Elements
    for(i = 0; i < n; i++)
    {
        if(max < a[i])
        max = a[i];
    }

    printf("Maximum Element = %d", max);
    return 0;
}