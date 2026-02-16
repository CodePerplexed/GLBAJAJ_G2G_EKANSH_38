#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, o;
    char c;
    printf("Enter two numbers and the operator respectively.\n");
    scanf("%d%d %c",&a ,&b, &c);
    if(c == '+')
    o = a + b;
    else if(c == '-')
    o = a - b;
    else if(c == '*')
    o = a * b;
    else if(c == '/')
    o = a / b;
    else if(c == '^')
    o = pow(a, b);
    
    printf("Result = %d", o);
    return 0;
}
