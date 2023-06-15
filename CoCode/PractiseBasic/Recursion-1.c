#include<stdio.h>

int fun(int n,int m)
{
    if(m==0)
    {
        return 0;
    }
    return n + fun(n,m-1);
}
int fun1(int x, int y)
{
    if (x == 0)
        return y;

    return fun1(x - 1, x + y);
}
/*
The first call to fun1 is fun1(5, 2). Since 5 is not zero, it returns fun1(4, 7).
The second call to fun1 is fun1(4, 7). Since 4 is not zero, it returns fun1(3, 11).
The third call to fun1 is fun1(3, 11). Since 3 is not zero, it returns fun1(2, 14).
The fourth call to fun1 is fun1(2, 14). Since 2 is not zero, it returns fun1(1, 16).
The fifth call to fun1 is fun1(1, 16). Since 1 is not zero, it returns fun1(0, 17).
The sixth call to fun1 is fun1(0, 17). Since 0 is zero, it returns 17.
*/
void PrintNumber(int n)
{
    if(n<0)
    {
        return ;
    }

    PrintNumber(n-1);
    printf(" %d ",n);
}
int SumOfDigit(int n)
{
    if(n==0)
    {
        return;
    }
    return n%10 + SumOfDigit(n/10);
}
void TraversingOfArray(int ar[],int len)
{
    if(len==0)
    {
        return;
    }

    TraversingOfArray(ar,len-1);
    printf(" %d ",ar[len-1]);
}
int sumArray(int *arr, int size)
{
    if (size == 0)
    {
        return 0;
    }
    else
    {
        return arr[0] + sumArray(arr + 1, size - 1);
    }
}
int main()
{
    /* int n=5,m=2;
     printf("%d ",fun1(n,m));
    int n=5;
    PrintNumber(n);
    int n=77;
    printf("%d",SumOfDigit(n));*/
    // int ar[10]= {1,2,3,4,5};
    // int len=5;

    // TraversingOfArray(ar,len);

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumArray(arr, size);
    printf("The sum of array elements is %d\n", sum);
    return 0;
}
