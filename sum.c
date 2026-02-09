#include <stdio.h>

void main() {
    int a, b, c;
    printf ("Enter two numbers.\n");
    scanf ("%i%d", &a, &b);
    c = a + b;
    printf("The Sum of %d and %d = %d", a, b, c);
}
