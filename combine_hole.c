#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            printf(" ");
        }
        printf("*");
        if (i > 1 && i <= n)
        {
            for (int k = 0; k < (2 * (i - 1) - 1); k++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        if (i >= 1 && i < n-1)
        {
            for (int k = 0; k < (2 * (n-1 - i) - 1); k++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
}
