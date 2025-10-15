#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char str[100],word;
    int len, count1 = 0, count2 = 0,low = 0;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count1++;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count2++;
        }
    }
    for (int i = 0; i < len; i++){
        if (count1 == count2)
        {
            printf("%c",tolower(str[i]));
        }
        else if(count1>count2)
        {
            printf("%c",tolower(str[i]));
        }
        else if(count1<count2)
        {
            printf("%c",toupper(str[i]));
        }
    }
    return 0;
}