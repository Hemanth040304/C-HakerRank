/* Find Digits */
// https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int temp=n,d,count=0;
        while(temp)
        {
            d=temp%10;
            if(d!=0 && n%d==0)
            {
                count++;
            }
            temp/=10;
        }
        printf("%d\n",count);
    }
}
