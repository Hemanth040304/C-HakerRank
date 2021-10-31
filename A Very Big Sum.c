/* A Very Big Sum */
#include<stdio.h>
void main()
{
	long elements,sum=0;
	scanf("%d",&elements);
    long arr[elements];
    for(int i=0;elements;elements--,i++)
    {
        scanf("%ld",&arr[i]);
        sum+=arr[i];
    }
    printf("%ld",sum);
}
