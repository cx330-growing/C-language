#include <stdio.h>

int main()
    {
        double i = 0;      
        double sum = 0;
        int flag = 1;        			//����һ������flag����������ÿ�μӻ��Ǽ���
        for(i=1;i<=100;i++)
        {
            sum +=flag*1/i;
            flag=-flag;
        }
        printf("%lf\n",sum);
        return 0;
    }
