#include <stdio.h>

int main()
{
    int i, j, a[10], n, t;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for(i = 0; i < n; i++)
    scanf("%d\n", &a[i]);

    // Bubble Sort Logic
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                // Swapping elements
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);

    return 0;
}