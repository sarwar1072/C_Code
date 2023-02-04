#include<stdio.h>
#include<math.h>11
int main()
{
    int  rem,sum=0,num,originalnum,time=0;
    scanf("%d",&originalnum);
    num=originalnum;
    while(num != 0)
    {
        time++;
        num=num/10;

    }
    num=originalnum;

    while(num != 0)
    {
        rem=num%10;
        sum=sum+pow(rem,time);

        num=num/10;
    }

    if(originalnum == sum)
    {
        printf("The number is armstrong\n");

    }
    else
    {
        printf("Numer is not armstrong ");
    }
    return 0;
}
