#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (void)
{
    const float PI = 3.1415926;
    float r, s, c;
    printf("please input r:");
    scanf("%f", &r);
    s = PI*r*r;
    c = 2*PI*r;
    printf("s = %f\n", s);
    printf("c = %f\n", c);
    return 0;
}