#include <stdio.h>
//1.递归
int Facl(int n)
{
    int i = 0;
    int ret = 1;
    for(i=1;i<=n;i++)
    {
        ret = ret*i;
    }
    return ret;
}
//2.迭代
int Facl(int n)
{
    if (n<2)
        return 1;
    else
        return n*Facl(n-1);
}
//主函数
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d",&n);
    ret = Facl(n);
    printf("%d\n",ret);
    return 0;
}