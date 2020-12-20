#include <stdio.h>

int bubble_sort(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        int j =0;
        int flag = 1;//表示本次排序的数据已经有序
        for(j=0;j<sz-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag = 0;//本次排序的数据不完全有序
            }
        }
        if(flag==1)
        {
        	break;
        }
    }
}
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,sz);
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}