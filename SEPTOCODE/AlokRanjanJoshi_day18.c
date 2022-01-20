#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, i, *p, *count;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n, j;
        scanf("%d", &n);
        p = (int *)malloc(sizeof(int) * n);
        count = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
            count[j] = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", p + j);
            count[p[j] - 1]++;
        }
        for (j = 0; j < n; j++)
        {
            if (count[j] == 0)
                printf("%d ", j + 1);
        }
        printf("\n");
        free(p);
        free(count);
    }

    return 0;
}