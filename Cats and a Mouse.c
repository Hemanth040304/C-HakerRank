#include<stdio.h>
int main()
{
    int number,x,y,z,temp=0,temp2=0;
    scanf("%d",&number);
    while(number)
    {
        scanf("%d%d%d",&x,&y,&z);
        if(x>z)
        {
            temp=x-z;
        }
        else
        {
            temp=z-x;
        }
        if(y>z)
        {
            temp2=y-z;
        }
        else
        {
            temp2=z-y;
        }
        if(temp>temp2)
        {
            printf("Cat B");
        }
        else if(temp<temp2)
        {
            printf("Cat A");
        }
        else 
        {
           printf("Mouse C");
        }
        printf("\n");
        number--;
    }
}
