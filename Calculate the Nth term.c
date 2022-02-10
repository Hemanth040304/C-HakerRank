/*Calculate the Nth term*/
/*https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=true*/
#include <stdio.h>
int find_nth_term(int n, int a, int b, int c) 
{
  int s[n],i;
   s[1]=a;
   s[2]=b;
   s[3]=c;
  for(i=4;i<=n;i++)
   {
       s[i]=s[i-1]+s[i-2]+s[i-3];  
   }
   return s[n];
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
}

