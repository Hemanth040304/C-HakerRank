/* Apple and Orange */
#include<stdio.h>
int main()
{
    int house_start,house_end,no_of_apples,no_of_orange,apple_tree,orange_tree;
    scanf("%d%d%d%d%d%d",&house_start,&house_end,&apple_tree,&orange_tree,&no_of_apples,&no_of_orange);  
    int apple[no_of_apples],orange[no_of_orange],apples_on_house=0,oranges_on_house=0;
    for(int i=0;i<no_of_apples;i++) 
    { 
        scanf("%d",&apple[i]);
    }
    for(int i=0;i<no_of_orange;i++)
    {
        scanf("%d",&orange[i]); 
    }
    for(int i=0;i<no_of_apples;i++)
    {
        if(apple_tree+apple[i]>=house_start && apple_tree+apple[i]<=house_end)
        {
            apples_on_house++;
        }
    }
    for(int i=0;i<no_of_orange;i++)
    {
        if(orange_tree+orange[i]>=house_start && orange_tree+orange[i]<=house_end)
        {
            oranges_on_house++;
        }
    }
    printf("%d\n%d",apples_on_house,oranges_on_house);
}
