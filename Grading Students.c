#include<stdio.h>
int main()
{
    int elements;
    scanf("%d",&elements);
    int score[elements],chaing[elements];
    for(int i=0;i<elements;i++)
    {
        scanf("%d",&score[i]);
        if(score[i]<37)
        {
            chaing[i]=score[i];
        }
        else if(score[i]%5==3)
        {
            chaing[i]=score[i]+2;
        }
        else if(score[i]%5==4)
        {
            chaing[i]=score[i]+1;
        }
        else
        {
            chaing[i]=score[i];
        }
    }
    for(int i=0;i<elements;i++)
    {
        printf("%d\n",chaing[i]);
    }
}
