#include <stdio.h>
int main()
{
    int i,j,ar[10];
    int fr[10],cnt,len,k;
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);
    }
  for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(ar[i]==ar[j]){
            for(k=j;k<len-1;k++){
                ar[j]=ar[]
            }
        }
    }
  }
    for(i=0; i<len; i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}

