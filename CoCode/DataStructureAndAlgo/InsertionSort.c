#include<stdio.h>
int main()
{
    int ar[10];
    int len,temp,i,j,val;
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
    for(i=1; i<len; i++)
    {
        temp=ar[i];
        val=i;
        while(val>0 && ar[val-1]>temp)
        {
            ar[val]=ar[val-1];
            val--;
        }

        ar[val]=temp;
    }
    printf("sorted array:\n ");
    for(i=0; i<len; i++)
    {
        printf(" %d ",ar[i]);
    }
    return 0;
}
