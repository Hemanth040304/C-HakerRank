/* Lonely Integer */
/*  */
#include<stdio.h>
int main()
{
    int elements,number=0;
    scanf("%d",&elements);
    int arr[elements];
    for(int i=0;i<elements;i++)
    {
        scanf("%d",&arr[i]);
    }
    number=arr[0];
    for(int i=1;i<elements;i++)
    {
        number=number^arr[i];
    }
    printf("%d",number);
}

