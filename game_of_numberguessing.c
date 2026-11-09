#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int magic, guess;
    int counter = 0;//从第一次用户输入开始记录，没输入时当然为0
    srand(time(NULL));//设置随机数种子
    magic = rand()%50 + 1;//生成1-50之间的随机数
    printf("已生成随机数,输入一个数字来猜猜看\n");
    do{
        printf("输入：");
        scanf("%d", &guess);
        counter++;//在每次读取输入的数字之后计数，避免计数混乱，这样等价于用户输入的次数
        printf("\n");       
        if(guess > magic)
        {
            printf("大了，请重新输入：\n");
        }
        else if (guess < magic)
        {
            printf("小了，请重新输入：\n");       
        }
        else
        {
        printf("game over,you are right!\n");
        }
    }while(guess != magic);//猜错则执行循环,直到猜对为止
    printf("counter=%d\n", counter);
    printf("答案是%d", guess);
    return 0;


}