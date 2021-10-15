#include<stdio.h>
int main()
{
    int number,r,sum=0;
    scanf("%d",&number);
    while(number)
    {
        r=number%10;
        sum+=r;
        number/=10;
    }
    printf("%d",sum);
}
