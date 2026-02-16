#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers.\n");
    scanf("%d%d", &a, &b);
    
    if((a ^ b) == 0)
    printf("The Numbers are equal.");
    else
    printf("The Numbers are not equal.");
    return 0;
}
