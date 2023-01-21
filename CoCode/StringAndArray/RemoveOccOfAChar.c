#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],removech;
    int i,j,len;
    gets(str);
    len=strlen(str);
    removech=getchar();

    for(i=0; i<len; i++)
    {
        if(removech==str[i])
        {
            for(j=i; j<len; j++)
            {
                str[j]=str[j+1];
            }
            i--;
            len--;

        }
    }

    printf("%s\n",str);
    return 0;
}

