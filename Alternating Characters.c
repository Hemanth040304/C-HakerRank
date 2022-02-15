/* Alternating Characters */
/* https://www.hackerrank.com/challenges/alternating-characters/problem?isFullScreen=true */
#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n)
    {
        char str[100000];
        scanf("\n%[^\n]s",str);
        for(int i = 0;str[i]!='\0'; i++)
        {
            if(str[i] == str[i+1])
            {
                c++;
            }
        }
        printf("%d\n",c);
        n--,c=0;
    }
}
