#include <stdio.h>
#include <string.h>
int main() 
{
    char ch;
    char s[100];
    char sen[1000];
    scanf("%c",&ch);
    scanf("%s",s);\
    scanf("\n");
    scanf("%[^\n]*s",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
