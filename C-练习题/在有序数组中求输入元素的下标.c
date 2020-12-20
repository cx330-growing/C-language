#include <stdio.h>
#include <string.h>

int main()
    {
        char arr[]={1,2,3,4,5,6,7,8,9,10,'\0'};
        int sz = strlen(arr);
        int k = 0;
        int left = 0;
        int right = sz-1;
        scanf("%d",&k);
        while(left<=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]>k)
            {
                right=mid-1;
            }
            else if(arr[mid]<k)
            {
                left=mid+1;
            }
            else
            {
                printf("check it! 下标 = %d\n",mid);
                break;
            }
        }
        if(left>right)
        {
            printf("找不到\n");
        }
        return 0;
    }