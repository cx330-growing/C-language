#include <stdio.h>
#include <string.h>

int main()
    {
        char arr[]= "welcome to china!!!!!!!!";
        char arr1[]="########################";
        int left = 0;
        int right = strlen(arr)-1;
        int i = 0;
        while(left<=right)
        {
            arr1[left]=arr[left];
            arr1[right]=arr[right];
            left++;
            right--;
            printf("%s\n",arr1);
        }
        return 0;
    }