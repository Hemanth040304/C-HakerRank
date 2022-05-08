/* Playing With Characters */
// https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true
#include <stdio.h>
int main() 
{
    char ch,str[100],string[1000];
    scanf("%c",&ch);
    scanf("%s",&str);
    scanf("\n");
    scanf("%[^\n]s",&string);
    printf("%c\n%s\n%s",ch,str,string);
}
