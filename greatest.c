#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter three numbers a, b and c respectively.\n");
    scanf("%d%d%d", &a, &b, &c);
    max = (a > b) ? a : (b > c) ? b : c;
    
    printf("The greatest number is %d.", max);
    return 0;
}
