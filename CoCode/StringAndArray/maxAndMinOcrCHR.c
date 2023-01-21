#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="i cccde for win";
    char ch1=str[0],ch2=str[0];
    int i,j,len=strlen(str),fre[len],max,min;
    for(i=0; i<len; i++)
    {
        fre[i]=1;
        for(j=i+1; j<len; j++)
        {
            if(str[i]==str[j]&& str[i]!=' '&& str[i]!='0')
            {
                fre[i]++;
                str[j]='0';
            }
        }
    }
    max=min=fre[0];
    for(i=0; i<len; i++)
    {
        if(max>fre[i])
        {
            max=fre[i];
            ch1=str[i];
        }
        if(min<fre[i])
        {
            min=fre[i];
            ch2=str[i];
        }
    }
    printf("Minimum occurring character: %c\n", ch1);
    printf("Maximum occurring character: %c", ch2);
    return 0;
}
