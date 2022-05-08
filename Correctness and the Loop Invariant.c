/* Correctness and the Loop Invariant */
// https://www.hackerrank.com/challenges/correctness-invariant/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]>arr[j] && i!=j)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
