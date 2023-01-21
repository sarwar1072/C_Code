#include<stdio.h>
#include <string.h>
int main()
{
    int a=1027;
    int *p=&a;
    // p=&a;
    //  printf("value for a %d\n",*p);
    //  printf("address for a %d\n",p);
    a=12;
    // printf("%d\n",*p);h
    // printf("%d\n",p);
    int b=1025;
    p=&b;
    // printf("value for b %d\n",*p);
    //  printf("address for b %d\n",p);
    //pointer arithmatic
    // printf("%d\n",p+1);
    char *q;
    q=(char*)p;  //type casting
    //printf("value: %d address: %d \n",q,*q);
    // printf("value: %d address: %d \n",q+1,*(q+1));
    //00000000 00000000 00000100 00000001 = //4       1
    // pointer to pointer example
    int a1=15;
    printf("%d\n",a1);

    int *p1=&a1;
    *p1=16;
    //printf("%d\n",a1);
    // printf("%d\n",*p1);

     int *ptr, a3 = 10;
        ptr = &a3;
        *ptr += 1;
        printf("%d,%d\n", *ptr, a3);


    return 0;
}
