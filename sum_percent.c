#include <stdio.h>

void main() {
    int a, b, c, d, e, sum;
    float p;
    printf ("Enter marks of five subjects.\n");
    scanf ("%i%d%d%d%d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    p = (float)sum / 5.0f;
    printf("The Sum of grades = %d and the percentage is %.2f%%.", sum, p);
}
