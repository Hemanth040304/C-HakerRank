/* Bitwise Operators */
#include<stdio.h>
void main()
{
    int n,k,maxAnd=0,maxOr=0,maxXor=0,i,j;
    scanf("%d%d",&n,&k);
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if( (i&j) > maxAnd && (i&j) < k)
            {
                maxAnd=i&j;
            }
            if( (i|j) > maxOr && (i|j) < k)
            {
                maxOr=i|j;
            }
            if( (i^j) > maxXor && (i^j) < k)
            {
                maxXor=i^j;
            }
        }
    }
    printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor);
}    
