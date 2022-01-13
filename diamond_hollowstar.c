
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count;
    int a = n, b = 0;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j < a || (j > a && j < a + b))
                printf(" ");
            else if (j == a)
                printf("*");
            else if (j == a + b && i != 1 && i != 2 * n - 1)
                printf("*");
        }
        if (i < n)
        {
            a--;
            b = b + 2;
        }
        else
        {
            a++;
            b = b - 2;
        }

        printf("\n");
    }
}