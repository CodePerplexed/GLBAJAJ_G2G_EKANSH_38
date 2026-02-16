#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number.\n");
    scanf("%d", &n);
    if((n & 1) == 1)
    printf("The number is odd.");
    else
    printf("The number is even.");
    return 0;
}
