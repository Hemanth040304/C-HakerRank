/* https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true */
/* Time Conversion */
#include<stdio.h>
int main()
{
    char arr[10];
    scanf("%[^\n]s",arr);
    if(arr[8]=='A' && arr[9]=='M')
    {
        if(arr[0]=='1'&& arr[1]=='2')
        printf("00%c%c%c%c%c%c",arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
        else
        printf("%c%c%c%c%c%c%c%c",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
    }
    else
    {
        if(arr[0]=='1'&& arr[1]=='2')
        printf("%c%c%c%c%c%c%c%c",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
        else
        printf("%c%c%c%c%c%c%c%c",arr[0]+1,arr[1]+2,arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
    }
}
