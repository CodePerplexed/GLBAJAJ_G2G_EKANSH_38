#include <stdio.h>
#include <math.h>

void main() {
    float f, c;
    printf ("Enter the temperature in degree centigrade.\n");
    scanf ("%f", &c);
    f = (c * 9/5) + 32;

    printf("The respective temperature in degree fahrenheit = %.2f", f);
    return;
}