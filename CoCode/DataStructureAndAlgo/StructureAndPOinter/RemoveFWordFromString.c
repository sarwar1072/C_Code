#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[100];
    int i, j, Flag,count=0,len,n;
    printf("Please Enter any String :  ");
    gets(str);
    printf("Please Enter the Word that you want to Search for :  ");
    gets(word);
    len=strlen(word);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == word[0])
        {
            Flag = 1;
            for(j = 0; word[j] != '\0'; j++)
            {
                if(str[i + j] != word[j])
                {
                    Flag = 0;
                    break;
                }
            }
        }
        if(Flag == 1)
        {
            for(n=i; n<=len; n++)
            {
                str[n]=str[n+len];
            }
            break;
        }
    }
    printf("number of words: %s\n",str);

    return 0;
}

