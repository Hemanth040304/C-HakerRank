/* Divisible Sum Pairs */
// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int n,k,count=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {        
        for(int j=i;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0 && i!=j)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}
