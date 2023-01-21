#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],removech;
    int i,j,k,len;
    gets(str);
    len=strlen(str);

    for(i=0; i<len; i++)
    {
        for(j=i+1; str[j]!='\0'; j++)
        {
            if(str[i]==str[j])
            {
                for(k=j; str[k]!='\0'; k++)
                {
                    str[k]=str[k+1];
                }

            }
        }
    }

    printf("%s\n",str);
    return 0;
}

