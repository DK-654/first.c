#include <stdio.h>
#include <math.h>
int main(void)
{
    float a, b, c;
    printf("please input a:");
    scanf("%f", &a);
    printf("please input b:");
    scanf("%f", &b);
    c = sqrt(a*a + b*b);
    printf("c = %f\n", c);
    return 0;

        
}