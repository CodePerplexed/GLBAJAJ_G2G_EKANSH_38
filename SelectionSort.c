#include <stdio.h>

int main()
{
    int i, j, a[10], n, t, key;

    printf("Enter number of elements to be inputted in the array.\n");
    scanf("%d", &n);

    printf("Enter '%d' elements into an array.\n", n);
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);

    // Selection Sort Logic
    for(i = 0; i < n - 1; i++)
    {
        key = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[key])
            {
                // Finding Smallest Element
                key = j;
            }
        }

        // Swap the smallest element with the initial element of the unsorted array
        t = a[i];
        a[i] = a[key];
        a[key] = t;
    }

    printf("Sorted Array:\n");
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);

    return 0;
}