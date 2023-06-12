#include<stdio.h>
int main()
{
    int ar[10];
    int len,temp,i,j,min;
    printf("Input array\n: ");

    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Before sort: \n");
    for(i=0; i<len; i++)
    {
        printf(" %d ",ar[i]);
    }
    for(i=0; i<len; i++)
    {
        min=i;
            for(j=i+1; j<len; j++)
        {
            if(ar[min]>ar[j])
            {
                min=j;
            }
        }
            temp=ar[i];
            ar[i]=ar[min];
            ar[min]=temp;
    }
    printf("sorted array:\n ");
    for(i=0; i<len; i++)
    {
        printf(" %d ",ar[i]);
    }
    return 0;
}
