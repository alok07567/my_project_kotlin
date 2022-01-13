#include <stdio.h>
#include<math.h>
int binary(int);
int binary(int n)
{
    if (n != 0)
    {
        binary(n / 2);
        printf("%d", n % 2);
    }
}
int main()
{
    binary(123);
    printf("\n");
}