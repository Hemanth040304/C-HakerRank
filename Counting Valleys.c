//Counting Valleys
#include<stdio.h>
int main()
{
    int elements,sealevel=0,valley=0;
    scanf("%d%c",&elements);
    char hike[elements];
    for(int i=0;i<elements;i++)
    {
        scanf("%c",&hike[i]);
        if (hike[i]=='U')
        {
            sealevel++;
        }    
        else
        {
            sealevel--;   
        }
        if (hike[i]=='U' && sealevel == 0)
        {
            valley++;
        }
    }
    printf("%d",valley);
}

