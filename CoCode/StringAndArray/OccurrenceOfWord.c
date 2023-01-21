#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[100];
    int i, j, flag;

    printf("Please Enter any String :  ");
    gets(str);

    printf("Please Enter the Word that you want to Search for :  ");
    gets(word);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == word[0])
        {
            flag=1;
            for(j = 0; word[j] != '\0'; j++)
            {
                if(str[i + j] != word[j])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag==1){
                printf("word is in position %d\n",i+1);
                flag=0;
            }
        }

    }

    return 0;
}

