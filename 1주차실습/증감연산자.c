#include <stdio.h>

void main(void)
{
    int a = 3;
    int b = 7;
    int d = 6;
    double c = 1.0f;
    a += 1; b += a; c -= b; d /= 2;

    printf("%d \n", a);
    printf("%d \n", a);
    printf("%.2f \n", c);
    printf("%d \n", d);
}