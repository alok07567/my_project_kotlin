#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y, ly, td;
    printf("Enter the year: ");
    scanf("%d", &y);
    //total no. of leap year count ehich will be considered for 366 days
    if (y >= 2001)
        ly = (y - 2001) / 4;
    else if (y < 2001)
        ly = ((2000 - y) / 4) + 1;
    //total no. of days are counted between the input year and 2001
    if (y >= 2001)
        td = 366 * ly + 365 * (y - 2001 - ly);
    else if (y < 2001)
        td = -(366 * ly + 365 * (2001 - y - ly));
    if (td % 7 == 0)
        printf("Monday\n");
    else if (td % 7 == 1 || td % 7 == -6)
        printf("Tuesday\n");
    else if (td % 7 == 2 || td % 7 == -5)
        printf("Wednessday\n");
    else if (td % 7 == 3 || td % 7 == -4)
        printf("Thursday\n");
    else if (td % 7 == 4 || td % 7 == -3)
        printf("Friday\n");
    else if (td % 7 == 5 || td % 7 == -2)
        printf("Saturday\n");
    else if (td % 7 == 6 || td % 7 == -1)
        printf("Sunday\n");
}