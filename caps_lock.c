#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100];
    int len, x = 1;
    scanf("%s", a);
    len = strlen(a);
    for (int i = 1; i < len; i++)
    {
        if (a[i] >= 97)
        {
            x = 0;
            break;
        }
    }
    if (x == 1)
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i] >= 97)
            {
                a[i] = a[i] - 32;
            }
            else
            {
                a[i] = a[i] + 32;
            }
            printf("%c", a[i]);
        }
    }
    else
    {
        printf("%s", a);
    }
    return 0;
}