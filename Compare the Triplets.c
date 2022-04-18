/*Compare the Triplets*/
// https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
#include<stdio.h>
int main()
{
    int a[3],b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    int x=0,y=0;
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        x++;
        else if(a[i]<b[i])
        y++;
    }
    printf("%d %d",x,y);
}
