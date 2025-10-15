#include <stdio.h>
int main(void)
{
    int a, b, count = 0;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        if (b == 1)
        {
            count++;
        }
    }
    if (count==0)
    {
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    return 0;
}