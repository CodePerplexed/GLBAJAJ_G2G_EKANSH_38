#include <stdio.h>

void main() {
    int a, b, t;
    printf ("Enter two numbers a and b respectively.\n");
    scanf ("%i%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("The numbers after swapping are:\na = %d \nb = %d", a, b);
}