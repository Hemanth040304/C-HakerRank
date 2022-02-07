/* https://www.hackerrank.com/challenges/the-hurdle-race/problem */
/* The Hurdle Race */
#include<stdio.h>
int main()
{
    int n,k,max=0;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
        max=arr[i];
    }
    if(max>=k)
    printf("%d",max-k);
    else
    printf("0");
}
