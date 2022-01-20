#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int arr[26], t, i;

    scanf("%d", &t);
    char **s;
    s = (char **)malloc(sizeof(char *) * t);
    for (i = 0; i < t; i++)
    {
        fflush(stdin);
        s[i] = (char *)malloc(sizeof(char) * 1000);
        scanf("%s", s[i]);
        s[i] = (char *)realloc(s[i], strlen(s[i]) + 1);
    }
    for (i = 0; i < t; i++)
    {
        int j, temp = 0;
        for (j = 0; j < 26; j++)
            arr[j] = -1;
        for (j = 0; j < strlen(s[i]); j++)
            arr[s[i][j] - 'a'] = 0;
        for (j = 0; j < 26; j++)
        {
            if (arr[j] == -1)
                temp = 1;
        }
        if (temp == 0)
            printf("Pass\n");
        else
            printf("Fail\n");
    }

    return 0;
}