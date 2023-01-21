#include <stdio.h>
#include<string.h>
int main()
{
    char str[100]="heeell";
    char result1=' ',result2=' ';
    int count[256]= {0};
    int i,max,j,len;
    // gets(str);
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        count[str[i]]++;
    }
    max=0;
    for(i=0; i<len; i++)
    {
        if(max<count[str[i]] && str[i]!=' ')
        {
            max=count[str[i]];
            result1=str[i];
        }
        if(j>count[str[i]])
        {
            j=count[str[i]];
            result2=str[i];
        }
    }
    printf("Enter your text %c : %d\n",result1,max);
    printf("Enter your text %c : %d",result2,j);

    return 0;
}
