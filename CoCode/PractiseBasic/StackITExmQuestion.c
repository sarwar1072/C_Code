#include<stdio.h>
#include <stdlib.h>
enum {false, true};
#include<string.h>
#include <limits.h> // For INT_MIN
void pointerExamp(int *p,int *q)
{
    p=q;
    *p=2;
    printf("p= %d q= %d\n",&p,&q);
}
int main()
{
    /*char str[10]="abpqx\n";
    int i;
    int len=strlen(str);
    for(i=0; i<len-2; i++)
    {
        if(i%2==0)
        {
            printf("from ++ %c ",str[i]++);
        }
        else
        {
            printf("from -- %c ",str[i]--);
        }
    }
    int i=-3,j=1,k=0,m;
    m=++i || ++j && ++k;
    printf(" %d %d %d %d ",i,j,k,m);
    int l=1;
    do{
        printf("%d",l++);
    }while(l<=0);
    char x=4,y=6;
    if(x&y){
        printf("f if\n");
    }
    if(x&&y){
        printf("s if");
    }
    void function(int n){
    if(n==0)
       return;}
        return function(n+1);
        int a=10,b,c;
    c=(a=44)?b=11:10;  //(a=44) true thats why answer will be 44 and 11
    printf("%d %d",a,c);
    int i=4;
    printf("%d %d",i++,++i);

    int i=0,j=1;
    pointerExamp(&i,&j);
    printf("%d %d",&i,&j);
    int i=2,j=2;
    while(i+1? --i:j--){
       // printf("%d",i);
    }
    int k=2,n,l;
    k+1;
    n=k++;
    l=n;
    printf(" %d",l);
    printf(" %d",k);
    int c2, a2,b2;
    c2=10%15;
    printf("c2 =%d\n",c2);
    int arr[5]= {10,20,30,40,50};
    int *ptr;
    ptr=arr;
    printf("%d\n",++*(ptr+3));
    printf("%d\n",*++ptr+3)

       int a=1,b=1,c,d;
       c=++a || b++;
       d=b--&&--a;
       printf("%d %d %d %d",d,c,b,a);;*/

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
        if (i < 15)
            break;
    }
    while (true);


    return 0;
}

