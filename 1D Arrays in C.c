/* 1D Arrays in C */
// https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int elements,sum=0;
    scanf("%d",&elements);
    int arr[elements];
    for(int i=0;i<elements;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
}
