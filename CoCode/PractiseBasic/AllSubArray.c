#include<stdio.h>
int main()
{
    int i,j,k,len;
    int ar[100];
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);

    }
    for(i=0; i<len; i++)
    {
        for(j=i; j<len; j++)
        {
            for(k=i; k<=j; k++)
            {
                printf("%d ",ar[k]);
            }
        }
    }
    return 0;
}
