/* https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true */
/* Pointers in C */
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    if(a>b)
    printf("%d",a-b);
    else
    printf("%d",b-a);
}
