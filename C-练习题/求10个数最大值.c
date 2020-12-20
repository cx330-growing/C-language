#include <stdio.h>

int main()
    {
        int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10};
        int max = arr[0];   //此处若max默认为0，则当数组元素全为负时，0为最大。
        int i = 0;			//得不到真值。
        int sz = sizeof(arr)/ sizeof(arr[0]);
        for (int i = 1; i < sz; ++i)
        {
            if (arr[i]>max)
            {
                max = arr[i];
            }
        }
        printf("max = %d\n",max);
        return 0;
    }
