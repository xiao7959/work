/*
筛法求素数
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, j;
    printf("请输入一个数：");
    scanf("%d", &a);
    int flag[100];
    for(i = 2; i <= sqrt(a); i++)
        for(j = 2; i * j <= a; j++)
            flag[i * j] = 1;
    printf("%d以内的素数为：");
    for(i = 2; i <= a;i++)
        if(flag[i] != 1)
            printf("%d ", i);
    return 0;
}