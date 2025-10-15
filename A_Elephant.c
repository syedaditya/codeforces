#include<stdio.h>
int main(void)
{
    int a,step=0;
    scanf("%d",&a);
       step = a/5;
       if (a%5==0)
       {
        printf("%d",step);
       }
       else{
        printf("%d",step+1);
       }      
return 0;
}