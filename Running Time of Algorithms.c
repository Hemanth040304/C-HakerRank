/* Running Time of Algorithms */
// https://www.hackerrank.com/challenges/runningtime/problem?isFullScreen=true
#include<stdio.h>
int insertion_sort(int *arr,int n)
{
    int temp,c=0;
    for(int j,i=1;i<n;i++)
    {
        j=i-1;
        while(arr[i]<arr[j])
        {
            temp=arr[i];    
            while(temp<arr[j])
            {
                c++;
                arr[j+1]=arr[j];
                arr[j]=temp;
                j--;
            }
        }
    }
    return c;
}
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    count=insertion_sort(arr,n);
    printf("%d",count);
}
