#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, *res, result;
    scanf("%d", &t);
    res = (int *)malloc(sizeof(int) * t);
    int **p;
    int i, j, k;
    int sr, sc;
    for (k = 0; k < t; k++)
    {
        int n;
        scanf("%d", &n);
        p = (int **)malloc(sizeof(int *) * n);
        for (i = 0; i < n; i++)
            p[i] = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                scanf("%d", &p[i][j]);
        }
        sr = sc = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == 0 || i == n - 1)
                    sr += p[i][j];
                if (j == 0 || j == n - 1)
                    sc += p[i][j];
            }
        }
        result = sr - sc;
        res[k] = result >= 0 ? result : (-result);
        free(p);
    }
    for (k = 0; k < t; k++)
        printf("%d\n", res[k]);

    return 0;
}