#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int len1, len2, x = 0;
    len1 = strlen(a);
    len2 = strlen(b);
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (tolower(a[i]) < tolower(b[i]))
        {
            printf("-1\n");
            return 0;
        }
        else if (tolower(a[i]) > tolower(b[i]))
        {
            printf("1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}