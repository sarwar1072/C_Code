#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0;
    printf("Enter the limit (n Value): ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
    {
        sum+=(1.0/i*i);
//sum = sum + 1.0/i
    }
    printf("Sum = %f\n", sum);
    return 0;
}
