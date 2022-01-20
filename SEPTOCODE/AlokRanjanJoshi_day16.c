#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, i, j, n, *a;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        a = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
            scanf("%d", a + j);
        int test;
        test = a[0] % 2;
        if (test == a[1] % 2)
        {
            j = 0;
            while (a[j] % 2 == test)
                j++;
            printf("%d\n", a[j]);
        }
        else
        {
            if (a[2] % 2 == test)
                printf("%d\n", a[1]);
            else
                printf("%d\n", a[0]);
        }
    }

    return 0;
}