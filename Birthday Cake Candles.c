/* Birthday Cake Candles */
#include<stdio.h>
int main()
{
    int noOfcandles,hightOfcandles=1,candles,temp=0;
    scanf("%d",&noOfcandles);
    for(;noOfcandles;noOfcandles--)
    {
        scanf("%d",&candles);
        if(candles>temp)
        {
            temp=candles;
        }
        else if(candles==temp)
        {
           hightOfcandles++; 
        }
    }
    printf("%d",hightOfcandles);
}
