#include<stdio.h>
int main()
{
    int ar[10],i,len,count,fr[10],j;

    printf("Give size: ");

    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);
        fr[i]=-1;
    }
    for(i=0; i<len; i++)
    {
        count=1;
        for(j=i+1; j<len; j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                fr[j]=0;
            }
        }
        if(fr[i]!=0)
        {
            fr[i]=count;
        }
    }
    for(i=0; i<len; i++)
    {
        if(fr[i]==1)
        {
            printf("Unique number: %d\n",ar[i]);
        }
    }
    return 0;
}
