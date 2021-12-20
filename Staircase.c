/*    #
     ##
    ###
   ####
*/
//Staircase
#include<stdio.h>
int main()
{
    int n,j,i,x;
    scanf("%d",&n);
    for(int j=0,i=0,x=n;i<n;i++,x--)
    {
        j=1;
        for(;j<=n;j++)
        {
            if(j>=x)
            {
                printf("#");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
