
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[100];
    int i, j, Flag,count=0;
    printf("Please Enter any String :  ");
    gets(str);
    printf("Please Enter the Word that you want to Search for :  ");
    gets(word);
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
            printf("number of words: %d\n",i);
            Flag = 0;
        }
    }
    return 0;
}

