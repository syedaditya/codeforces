#include <stdio.h> 
#include<string.h> 
int main(void)  
{ 
	char c[100]; 
    int a;
	scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
	scanf("%s",c);
    int len = strlen(c);
        if (len>10)
            printf("%c%d%c",c[0],len-2,c[len-1]);
        else 
            printf("%s",c);
        printf("\n");
    }
	return 0; 
}