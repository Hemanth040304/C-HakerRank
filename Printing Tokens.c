/* https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true */
/* Printing Tokens */
#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            printf("%c",str[i]);
        }
        else {
        printf("\n");
        }
    }
}
