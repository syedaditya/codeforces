#include<stdio.h>
#include<ctype.h>
int main(void)
{
 char str[1000];
 scanf("%s",str);
 str[0]=toupper(str[0]);
 printf("%s",str);
return 0;
}