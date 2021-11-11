/* Array Reversal */
#include<stdio.h>
int main()
{
    int elements,k,j,temp=0;
    scanf("%d",&elements);
    int arr[elements];
    for(int i=0;i<=elements;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0,k=elements-1;j<=k;j++,k--)
    {
        temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
    }
    for(int i=0;i<=elements-1;i++)
    {
        printf("%d ",arr[i]);
    }
}
