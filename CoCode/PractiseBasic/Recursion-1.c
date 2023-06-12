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
int main()
{
    int n=5,m=2;
    printf("%d ",fun1(n,m));

    return 0;
}
