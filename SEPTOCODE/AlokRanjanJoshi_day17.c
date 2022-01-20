#include <stdio.h>
#include <math.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int sum, num = n, j = 0;
        while (1)
        {
            sum = 0;
            while (num > 0)
            {
                sum += pow(num % 10, 2);
                num /= 10;
            }
            num = sum;
            if (num == 1)
            {
                printf("lucky\n");
                break;
            }
            else if (num == 4)
            {
                printf("unlucky\n");
                break;
            }
            j++;
        }
    }

    return 0;
}