#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, *p;
    scanf("%d", &t);
    int i, n;
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        p = (int *)malloc(sizeof(int) * n);
        int j;
        for (j = 0; j < n; j++)
            scanf("%d", p + j);
        for (j = 0; j < n - 1; j++)
        {
            if (p[j] == p[j + 1])
            {
                printf("Gentle\n");
                goto end;
            }
        }
        printf("Steep\n");
    end:
        free(p);
    }

    return 0;
}