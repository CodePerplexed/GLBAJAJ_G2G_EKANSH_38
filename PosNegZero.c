#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
    
    if(n < 0)
    printf("The Number is negative.");
    else if(n > 0)
    printf("The Number is positive.");
    else if(n == 0)
    printf("The number is zero.");
    else
    printf("Invalid input.");
    return 0;
}
