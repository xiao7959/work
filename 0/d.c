/*
逆康托展开
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE 100

int fact1(int x)
{
    if(x == 0 || x == 1)
        return 1;
    else
    {
        int result = 1;
        for(int i = 1; i <= x; i++)
            result *= i;
        return result;
    }    
}

int main()
{
    int X, len = 0;
    printf("请输入一个数：");
    scanf("%d", &X);
    while (fact1(len) <= X)
        len++;
    int* number = (int*)malloc(sizeof(int)*len);
    X -= 1;
    for(int i = 0; i < len; i++)
    {
        number[i] = X / fact1(len - 1 - i);
        X %= fact1(len - 1 - i);
    }
    int flag[MAXSIZE] = {0};
    for(int i = 0; i < len; i++)
    {
        if(i == len - 1)
        {
            for(int j = 0; j < len; j++)
                if(flag[j] == 0)
                    printf("%d", j + 1);
        }
        else
        {
            int cnt = 0;
            for(int j = 0; j < len; j++)
            {
                if(flag[j] == 0)
                    cnt++;
                if(cnt == number[i] + 1)
                {
                    flag[j] = 1;
                    printf("%d", j + 1);
                    break;
                } 
            }
        }
    }
    return 0;
}