#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle.\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && b == c)
    printf("Equilateral triangle.");
    else if( ((pow(a,2) + pow(b, 2)) == pow(c,2)) || ((pow(b,2) + pow(c, 2)) == pow(a,2)) || ((pow(a,2) + pow(c, 2)) == pow(b,2)))
    printf("Right Angled Triangle.");
    else if((a==b) || (a==c) || (b==c))
    printf("Isosceles Triangle.");
    else if( ((pow(a,2) + pow(b, 2)) < pow(c,2)) || ((pow(b,2) + pow(c, 2)) < pow(a,2)) || ((pow(a,2) + pow(c, 2)) < pow(b,2)))
    printf("Obtuse Trinagle.");
    else if( ((pow(a,2) + pow(b, 2)) > pow(c,2)) || ((pow(b,2) + pow(c, 2)) > pow(a,2)) || ((pow(a,2) + pow(c, 2)) > pow(b,2)))
    printf("Acute Trinagle.");
    
    return 0;
}
