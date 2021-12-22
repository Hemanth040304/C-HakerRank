//Electronics Shop
#include<stdio.h>
int main()
{
    int amount,keyelements,driveelements,costly=0;
    scanf("%d%d%d",&amount,&keyelements,&driveelements);
    int keyboard[keyelements],drive[driveelements];
    for(int i=0;i<keyelements;i++)
    {
        scanf("%d",&keyboard[i]);
    }
    for(int i=0;i<driveelements;i++)
    {
        scanf("%d",&drive[i]);
    }
    for(int i,j=0;j<driveelements;j++)
    {
        i=0;
        for(;i<keyelements;i++)
        {
            if((keyboard[i]+drive[j])<=amount && costly<keyboard[i]+drive[j])
            {
                costly=keyboard[i]+drive[j];
            }
        }
    }
    if(costly==0)
    {
        costly=-1;
    }
    printf("%d",costly);
}
