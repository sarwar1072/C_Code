#include<stdio.h>
int main()
{
    int i,j,k,len,count=0;
    int ar[100];
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);

    }
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            for(k=j+1; k<=len; k++)
            {
                if(ar[i] + ar[j] > ar[k] &&
                   ar[i] + ar[k] > ar[j] &&
                   ar[j] + ar[k] > ar[j])
                {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}


