#include<stdio.h>
int main(void)
{
    int w;
    scanf("%d",&w);
    if (w%2==0 && w>2)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }     
return 0;
}