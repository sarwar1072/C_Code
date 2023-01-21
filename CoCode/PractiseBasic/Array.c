#include<stdio.h>
int main()
{
   int ar[10],len,i,temp,j;
   scanf("%d",&len);
   for(i=0;i<len;i++){
    scanf("%d",&ar[i]);
   }

   for(i=0;i<len;i++){
    for(j=i+1;j<len;j++){
        if(ar[i]>ar[j]){
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
   }
   for(i=0;i<len;i++){
    printf("%d\n",ar[i]);
   }

    return 0;
}
