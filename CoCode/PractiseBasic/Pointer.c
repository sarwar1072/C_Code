#include <stdio.h>
int main()
{
    int i,j,ar[10],fr[10],cnt,len;
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);
        fr[i]=-1;
    }

    for(i=0; i<len; i++)
    {
        cnt=1;
        for(j=0; j<len; j++)
        {
            if(ar[i]==ar[j])
            {
                cnt++;
                fr[j]=0;

            }
        }
        if(fr[i]!=0)
        {
            fr[i]=cnt;
        }
    }

    for(i=0; i<len; i++)
    {
        if(fr[i]==1)
        {
            printf("%d\n",ar[i]);
        }
    }

    return 0;
}
