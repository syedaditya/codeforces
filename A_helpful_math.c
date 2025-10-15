#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[1000];
    int temp = 0;
    int len;
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if ((str[i] != '+') && (str[j] != '+'))
            {

                if (str[i] > str[j])
                {
                    temp = str[j];
                    str[j] = str[i];
                    str[i] = temp;
                }
            }
        }
        printf("%c", str[i]);
    }
    return 0;
}