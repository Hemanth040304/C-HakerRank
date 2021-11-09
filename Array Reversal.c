/* Array Reversal */
#include<stdio.h>
int main()
{
    int elements,i,j;
    scanf("%d",&elements);
    int arr[elements];
    for(j=0;j<=elements;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(i=elements-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
