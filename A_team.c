#include<stdio.h>
int main(void)
{
    int s1,s2,s3,n,sum =0,count =0;
    scanf("%d",&n);
    while (n--){
        scanf("%d %d %d",&s1,&s2,&s3);
        sum = s1+s2+s3;
        if (sum>=2)
        {
            count++;
        }
    }
    printf("%d",count);
return 0;
}
