/* CamelCase */
/* https://www.hackerrank.com/challenges/camelcase/problem?isFullScreen=true */
#include<stdio.h>
int main()
{
    char str[100000];
    scanf("%[^\n]s",str);
    int point=1;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]<=90 && str[i]>=65)
        {
            point++;
        }
    }
    printf("%d",point);
}
