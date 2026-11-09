#include <stdio.h>
int main(void)
{
    char ch;
    printf("please input a charachter and then press enter:");//输入一个大写字母然后回车，注意是大写
    ch = getchar();
    printf("the ascii code of the character you input is: %d\n", ch);
    ch = ch + 32;
    printf("the character you input is: %c\n", ch);
    printf("the ascii code of the character you input is: %d\n", ch);
    return 0;
}