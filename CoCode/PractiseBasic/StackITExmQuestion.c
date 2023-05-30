#include<stdio.h>
#include<string.h>
int main()
{
    char str[10]="abpqx\n";
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
    return 0;
}

