#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[101];
    char t[101];
    int x = 0;
    scanf("%s", s);
    scanf("%s", t);
    int len = strlen(s);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        if (s[i] == t[j])
        {
            x = 1;
        }
        else
        {
            x = 0;
            break;
        }
    }
    if (x == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}