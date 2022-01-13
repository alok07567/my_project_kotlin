#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p;
    int arr[500], i, x = 1, l = 0, lc = 0;
    for (i = 0; i < 500; i++)
        arr[i] = 0;
    p = (char *)malloc(sizeof(char) * 1000);
    scanf("%[^\n]s", p);
    p = realloc(p, sizeof(char) * (strlen(p) + 1));
    for (i = 0; p[i] != '\0'; i++)
    {
        if (arr[p[i]] == x)
        {
            x++;
            i -= l;
            i++;
            
            l = 1;
        }
        else
            l++;
        arr[p[i]]++;
    }

    return 0;
}