#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, a, b, c;
    scanf("%d", &n);
    float *score;
    score = (float *)malloc(sizeof(float) * n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        score[i] = a + (float)b * c / a - b;
    }
    for (i = 0; i < n; i++)
        printf("%f\n", score[i]);

    return 0;
}