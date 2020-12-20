#include <stdio.h>

int main()
    {
        int i = 0;
        int j = 1;
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d*%d=%-2d ",i,j,i*j);	// 2d 输出两位数字，不够两位的第一位用空格代替
            }
            printf("\n");
        }
        return 0;
    }
