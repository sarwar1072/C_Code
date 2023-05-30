#include<stdio.h>
int main()
{

    int arr[10];
    int i,j,temp,len;
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<len; i++)
    {
        for(j=0; j<len; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0; i<len; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
