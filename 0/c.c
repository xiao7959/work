/*
康托展开
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE 100

int* fact1(char* str)
{
    int* jiecheng = (int*)malloc(sizeof(int) * strlen(str));
    jiecheng[0] = 1;
    for(int i = 1; i < strlen(str); i++)
        jiecheng[i] = jiecheng[i - 1] * i;
    return jiecheng;
}

int* fact2(char* str)
{
    int len = strlen(str);
    int* number = (int*)malloc(sizeof(int) * strlen(str));
    for(int i = 0; i < len; i++)
    {
        int cnt = 0;
        for(int j = i + 1; j < len; j++)
            if(str[i] > str[j])
                cnt++;
        number[len - 1 - i] = cnt;
    }    
    return number;
}

int main()
{
    char str[MAXSIZE];
    printf("请输入一个数：");
    gets(str);
    int len = strlen(str), X = 0;
    int* jiecheng = fact1(str);
    int* number = fact2(str);
    printf("X = ");
    for(int i = len - 1; i >= 0; i--)
    {
        X += number[i] * jiecheng[i];
        if(i)
            printf("%d * %d! + ",number[i] ,i);
    }
    printf("%d * %d! = ",number[0], 0);
    printf("%d",X);
}