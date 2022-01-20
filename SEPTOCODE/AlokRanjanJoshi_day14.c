#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, *pos, *std;
    scanf("%d", &t);
    pos = (int *)malloc(sizeof(int) * t);
    int i, j;
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        std = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
            scanf("%d", std + j);
        int key = 0;
        for (j = 0; j < n; j++)
        {
            if (std[key] < std[j])
                key = j;
        }
        pos[i] = key + 1;
        free(std);
    }
    for (i = 0; i < t; i++)
        printf("%d\n", pos[i]);

    return 0;
}