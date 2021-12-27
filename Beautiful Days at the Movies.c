#include<stdio.h>
#include<math.h>
//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true
int main()
{
    int starting_day,ending_day,rev,divisor,temp,temprev,number,beautiful=0;
    scanf("%d%d%d",&starting_day,&ending_day,&divisor);
    temp=starting_day;    
    while(temp<=ending_day)
    {
        temprev=temp,rev=0;
        while(temprev)
        {
            rev=rev*10+(temprev%10);
            temprev/=10;
        }
        if(starting_day>rev)
        {
            number=starting_day-rev;
        }
        else {
        number=rev-starting_day;
        }
        if((float)number/divisor==number/divisor)
        {
            beautiful++;
        }
        starting_day++,temp++;
    }
    printf("%d",beautiful);
}
