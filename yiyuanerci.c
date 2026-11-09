#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c, d, p, q, x1, x2;
    a=2;
    b=7;
    c=-5;
    d=b*b-4*a*c;
    p=-b/(2*a);
    q=sqrt(fabs(d))/(2*a);
    printf("方程2x^2+7x-5=0的根为:\n");
    printf("x1=%f\n", p+q);
    printf("x2=%f\n", p-q);
    return 0;
}