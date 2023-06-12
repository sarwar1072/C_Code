#include<stdio.h>
#include<string.h>
#include <limits.h> // For INT_MIN
int main()
{
    int ar[10],i,max1,max2,max3;
    int len,j,l=0,d;
    scanf("%d",&len);
    for(i=0; i<len; i++)
    {
        scanf("%d",&ar[i]);
    }
   max1=max2=max3=0;//0 or INT_MIN can be use;
    for(i=0; i<len; i++)
    {
        if(ar[i]>max1)
        {
            max1=ar[i];  // largest element
        }
    }
    for(i=0; i<len; i++)
    {
        if(ar[i]>max2 && ar[i]<max1)  // for second largest
        {
            max2=ar[i];
        }
    }
    for(i=0; i<len; i++)
    {
        if(ar[i]>max3 && ar[i]< max2 && ar[i]<max1 )   /// for third largest
        {
            max3=ar[i];

        }
    }
    printf("2nd largest: %d\n",max2);
    printf("3rd largest: %d",max3);


    return 0;
}

