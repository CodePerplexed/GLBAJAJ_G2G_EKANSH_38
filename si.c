#include <stdio.h>
#include <math.h>

void main() {
    float si, p, r, t, ci;
    printf ("Enter principal, rate and time(in months) respectively.\n");
    scanf ("%f%f%f", &p, &r, &t);
    si = (p * r * t/12) / 100;
    printf("The Simple Interest = %.2f\n", si);
    ci = p * pow(1 + r/100, t/12) - p;
    printf("The Compound Interest = %.2f", ci);
    return;
}