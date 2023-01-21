
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],oldCh,newCh;
    int i,j,k,len;
    printf("Input string: ");
    gets(str);
    len=strlen(str);
    printf("Input old char: ");
    scanf("%c",&oldCh)  ;
    getchar();
    printf("Input new char : ");
    scanf("%c",&newCh) ;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==oldCh)
        {
            str[i]=newCh;
        }
    }

    printf("%s\n",str);
    return 0;
}


