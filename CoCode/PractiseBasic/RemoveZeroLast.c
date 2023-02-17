#include<stdio.h>
int main()
{
    int ar[100];
    int ar2[100];
    int i,j=0,len;
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<len; i++)
    {
        if(ar[i]!= 0)
        {
            ar2[j]=ar[i];
            j++;

        }
    }
    for(i=j-1; i<len; i++)
    {
        ar2[i]=0;
    }

    for(i=0; i<len; i++)
    {
        printf("%d ",ar2[i]);
    }
    return 0;
}
