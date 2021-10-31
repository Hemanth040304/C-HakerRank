/* Plus Minus */
#include<stdio.h>
int main()
{
    int elements,temp;
    double pos=0.0,neg=0.0,zero=0.0;
    scanf("%d",&elements);
    temp=elements;
    int arr[elements];
    for(int i=0;elements;elements--,i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("%.6lf\n",pos/temp);
    printf("%.6lf\n",neg/temp);
    printf("%.6lf\n",zero/temp);
}
