#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *ptr1;
    int *ptr2;
    int n, m,sum;
    printf("Enter 1st loop: ");
    scanf("%d", &n);
    ptr1 = (int *)malloc(n * sizeof(int));
    ptr2 = (int *)malloc(m * sizeof(int));
    for (int i = 0; i < n; i++)
    {
         sum = 0;
        printf("Enter 2nd loop: ");
        scanf("%d", &m);
        for (int j = 0; j < m; j++)
        {

            printf("Enter %d: ", j + 1);
            scanf("%d", &ptr2[j]);
            sum = sum + ptr2[j];
            
        }
        if (sum<0)
        {
            sum = sum * -1;
        }
        printf("%d\n", sum);
    }
    return 0;
}