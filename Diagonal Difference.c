/*Diagonal Difference */
#include<stdio.h>
int main()
{
    int i,j,left_sum=0,right_sum=0;
    scanf("%d",&i);
    j=i;
    int arr[i][j];
    for(int k=0;k<i;k++)
    {
        for(int y=0;y<i;y++)
        {
            scanf("%d",&arr[k][y]);
        }
    }
    for(int k=0;k<i;k++)
    {
        for(int y=0;y<i;y++)
        {
            if(k==y)
            {
                left_sum+=arr[k][y];
            }
            if(y+k==(i-1))
            {
                right_sum+=arr[k][y];
            }
        }
    }
    if(left_sum<right_sum)
    {
        printf("%d",right_sum-left_sum);
    }
    else
    {
        printf("%d",left_sum-right_sum);
    }
}
