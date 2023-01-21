#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    char toFind;
    int index=0,i,temp;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
   toFind=getchar();
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==toFind)
        {
            index++;
       // printf("'%c' is found at index %d.", toFind, i);

        }
    }
printf("%d\n",index);
    return 0;
}
