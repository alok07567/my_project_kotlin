#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count;
    int a = n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {

            if (j < a)
                printf(" ");
            else
                printf("* ");
        }
        if (i < n)
            a--;
        else
            a++;
        printf("\n");
    }
}