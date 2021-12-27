#include<stdio.h>
int main()
{
    int no_arrs,elements,threshold,time=0;
    scanf("%d",&no_arrs);
    while(no_arrs)
    {
        scanf("%d%d",&elements,&threshold);
        int arr[elements];
        time=0;
        for(int i=0;i<elements;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]<=0)
            {
                time++;
            }
        }
        no_arrs--;
        if(time>=threshold)
        {
            printf("NO\n");
        }
        else {
        printf("YES\n");
        }
    }
}
