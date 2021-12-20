#include<stdio.h>
int main()
{
    int elements,temp=0,temp2=0,min=0,max=0;
    scanf("%d",&elements);
    int score[elements];
    for(int i=0;i<elements;i++)
    {
        scanf("%d",&score[i]);
        if(i==0)
        {
            temp=score[i];
            temp2=score[i];
        }
        if(temp>score[i])
        {
            temp=score[i];
            min++;
        }
        if(temp2<score[i])
        {
            temp2=score[i];
            max++;
        }
    }
    printf("%d %d",max,min);
}
