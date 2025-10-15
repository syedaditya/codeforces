#include <stdio.h>
int main(void)
{
    int n, k, a[100], next = 0;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= a[k - 1] && a[i] > 0)
        {
            next++;
        }
    }
    printf("%d", next);

    return 0;
}