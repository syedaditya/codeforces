#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, x = 0;
    char s[4];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (s[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n", x);

    return 0;
}