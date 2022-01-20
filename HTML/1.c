#include <stdio.h>
int toh(int,char,char,char);
int toh(int n, char br, char ar, char er)
{
    if (n == 1)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
        printf("%c to %c\n", br, er);
    else
    {
        toh(n-1,br,er,ar);
        printf("%c to %c\n",br,er);
        toh(n-1,ar,br,er);
    }
}
int main()
{
//     int n;
//     printf("Enter no. of plates: ");
//     scanf("%d", &n);
//     int k=n;
//     char br = 'A', ar = 'C', er = 'B';
//     toh(n, br, ar, er);
    int x=1,y=5;
    printf("%d",++x+y);
}

