#include<stdio.h>
//https://www.hackerrank.com/challenges/save-the-prisoner/problem?isFullScreen=true
int main()
{
    int arrs,n,m,s,rem_candy,temp=0,number;
    scanf("%d",&arrs);
    while(arrs)
    {
        n=0,m=0,s=0;
        scanf("%d%d%d",&n,&m,&s);
        number=(s-1+m-1)%n+1;
        printf("%d\n",number);
        arrs--;
    }
}
