#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    char toFind=0;
    int index,i;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to be searched: ");
     gets(toFind)
      for(i=0;str[i]!='\0';i++){
        if(str[i]==toFind){
            index=i;
            break;
        }
      }
    if(index ==0)
        printf("'%c' not found.", toFind);
    else
        printf("'%c' is found at index %d.", toFind, index);

    return 0;
}
