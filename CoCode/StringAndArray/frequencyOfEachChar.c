#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int fr[26];
    int i,j,len;
    gets(str);
    len=strlen(str);
    for(i=0; i<26; i++)
    {
        fr[i]=0;
    }
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            fr[str[i] - 97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            fr[str[i]- 65]++;
        }
    }
    for(i=0; i<26; i++)
    {
        if(fr[i]!=0)
        {
            printf("'%c' = %d\n", (i + 97), fr[i]);

        }
    }
    return 0;
}

