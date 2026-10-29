#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define LIU 1e-6
int main(void){
    float a, b, c, disc, p, q;
    printf("please input a,b,c:");
    scanf("%f %f %f", &a, &b, &c);
    getchar();
    if(fabs(a) <=LIU)
    {
        printf("a is too small, please input again:");
        exit(0);
    
    }
    disc =b*b - 4*a*c;//计算判别式
    p = -b/(2*a);
    q = sqrt(fabs(disc))/(2*a);
    if(fabs(disc) <= LIU)
    {
        printf("两个相等的实数根: %f\n", p);
    
    }
    else 
    {
        if(disc > LIU)
        {
        printf("两个不相等的实数根: %f, %f\n", p+q , p-q);
        }
        else
        { 
        printf("两个共轭复数根: %f + %fi, %f - %fi\n", p, q, p, q);
        }
    }
    return 0;    
}