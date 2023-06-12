#include<stdio.h>
void fun(int* ptr)
{
    *ptr=20;
}
int main()
{
    int a=12;
    fun(&a);
    printf("%d\n",a);
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    int sub=ptr2-ptr1;
    printf("ptr1: %d\n", ptr1);
    printf("ptr2: %d\n", ptr2);

    printf("%f\n", *ptr2);
    printf("subtraction: %d\n", sub);
    return;
}
