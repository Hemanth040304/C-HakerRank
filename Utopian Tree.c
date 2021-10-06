#include<stdio.h>
void main()
{
	int t,n,i,h;
	scanf("%d",&t);
	while(t>0)
	{
		i=0;
		h=0;
		scanf("%d",&n);
		while(i<=n)
		{
			if(i%2==0)
			{
				h+=1;
			}
			else 
			{
				h*=2;
			}
			i++;
		}
		printf("%d\n",h);
		t--; 
    }  
}
