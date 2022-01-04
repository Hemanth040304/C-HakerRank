/* Viral Advertising */
//https://www.hackerrank.com/challenges/strange-advertising/problem
#include<stdio.h>
int main()
{
    int day;
    long long persons,people_like, cumm;
    scanf("%d",&day);
    persons=cumm=people_like=2;
    for(;day>1;day--)
    {
        people_like = people_like*3/2;
        cumm+=people_like;
    }
    printf("%lld",cumm);
}
