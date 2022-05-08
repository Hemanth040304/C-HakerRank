/* Mini-Max Sum */
#include<stdio.h>
int main()
{
    long long i,j,k,temp,arr[5],minSum=0,maxSum=0;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        minSum+=arr[i];
    }
    for(j=4;j>0;j--)
    {
        maxSum+=arr[j];
    }
    printf("%lld %lld",minSum,maxSum);
}
