/* Sherlock and Squares */
// https://www.hackerrank.com/challenges/sherlock-and-squares/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,count=0,x=1;
        scanf("%lld%lld",&a,&b);
        while(x*x<=b)
        {
            if(x*x>=a && x*x<=b)
            {
                count++;
            }
            x++;
        }
        printf("%lld\n",count);
    }
}
