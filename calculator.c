#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, o;
    char c;

    printf("Enter two numbers and the operator respectively.\n");
    scanf("%d%d %c",&a ,&b, &c); // space before %c avoids newline issue
    
    switch (c)
    {
    case '+':
    o = a + b;
    printf("Result = %d", o);
    break;

    case '-':
    o = a - b;
    printf("Result = %d", o);
    break;

    case '*':
    o = a * b;
    printf("Result = %d", o);
    break;

    case '/':
    o = a / b;
    printf("Result = %d", o);
    break;

    case '^':
    o = pow(a, b);
    printf("Result = %d", o);
    break;

    case '%':
    o = a % b;
    printf("Result = %d", o);
    break;
    
    default:
    printf("Invalid operator.");
    }
    return 0;
}
