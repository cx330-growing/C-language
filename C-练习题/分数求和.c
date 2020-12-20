#include <stdio.h>

int main()
    {
        double i = 0;      
        double sum = 0;
        int flag = 1;        			//设置一个变量flag，用来控制每次加还是减。
        for(i=1;i<=100;i++)
        {
            sum +=flag*1/i;
            flag=-flag;
        }
        printf("%lf\n",sum);
        return 0;
    }
