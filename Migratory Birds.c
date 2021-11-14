/* Migratory Birds */
#include<stdio.h>
int main()
{
    int size,one=0,two=0,three=0,four=0,five=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            one++;
        }
        else if(arr[i]==2)
        {
            two++;
        }
        else if(arr[i]==3)
        {
            three++;
        }
        else if(arr[i]==4)
        {
            four++;
        }
        else 
        {
            five++;
        }
    }
    if(one>=two && one>=three && one>=four && one>=five)
    {
        printf("1");
    }
    else if(two>=one && two>=three && two>=four && two>=five)
    {
        printf("2");
    }
    else if(three>=one && three>=two && three>=four && three>=five)
    {
        printf("3");
    }
    else if(four>=one && four>=two && four>=three && four>=five)
    {
        printf("4");
    }
    else if(five>=one && five>=two && five>=four && five>=three)
    {
        printf("5");
    }
}
