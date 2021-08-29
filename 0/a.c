/*
欧几里得算法求最大公约数
*/

#include <stdio.h>

int main()
{
    int a, b, min, max, yushu;
    printf("请输入两个数字：");
    scanf("%d %d", &a, &b);
    min = (a < b)?a:b;
    max = (a > b)?a:b;
    while(min > 0)
    {
        yushu = max % min;
        max = min;
        min = yushu;
    }
    printf("最大公约数为：%d\n", max);
    return 0;
}