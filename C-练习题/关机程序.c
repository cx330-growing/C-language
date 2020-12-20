#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input[20]={0};
    system("shutdown -s -t 60");
    again:
    printf("你的电脑将在一分钟内关机，请输入：马老师发生什么事了,就取消关机\n");
    scanf("%s",input);
    if(strcmp(input,"马老师发生什么事了")==0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}