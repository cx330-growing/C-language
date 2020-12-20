#include <stdio.h>
//1.递归
int Fib(int n)
{
    if (n<3)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
//2.循环
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    while(n>2)
    {
        c = a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}
//主函数
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Fib(n);
    printf("%d\n",ret);
    return 0;
}