/*Intro to Tutorial Challenges*/
// https://www.hackerrank.com/challenges/tutorial-intro/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int v,n;
    scanf("%d%d",&v,&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(v==arr[i])
        {
            printf("%d",i);
        }
    }
}
