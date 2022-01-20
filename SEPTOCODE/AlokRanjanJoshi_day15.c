#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, i, j, n, *s, *temp;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        s = (int *)malloc(sizeof(int) * n);
        temp = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
        {
            temp[j] = 0;
            scanf("%d", &s[j]);
        }
        for (j = 0; j < n; j++)
            temp[s[j] - 1]++;
        for (j = 0; j < n; j++)
        {
            if (temp[j] == 0)
            {
                printf("%d\n", j + 1);
                break;
            }
        }
        free(s);
        free(temp);
    }

    return 0;
}