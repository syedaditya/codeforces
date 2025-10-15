#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int cal[6];
    cal[0] = a + b * c;
    cal[1] = a * (b + c);
    cal[2] = a * b * c;
    cal[3] = (a + b) * c;
    cal[4] = a + b + c;
    int max = cal[0];
    for (int i = 0; i < 5; i++)
    {
        if (cal[i] >= max)
        {
            max = cal[i];
        }
    }
    printf("\n%d", max);
    return 0;
}