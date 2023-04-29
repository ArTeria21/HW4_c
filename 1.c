#include <stdio.h>

int main()
{
    int mounth, year, days, i;
    int big_mounth[7] = {1, 3, 5, 7, 8, 10, 12};
    int little_mounth[4] = {4, 6, 9, 11};
    days = 28;
    scanf("%d %d", &mounth, &year);

    for (i = 0; i < 7; i++)
    {
        if (big_mounth[i] == mounth)
        {
            days = 31;
            break;
        }
    }

    if (days == 28)
    {
        for (i = 0; i < 4; i++)
        {
            if (little_mounth[i] == mounth)
            {
                days = 30;
                break;
            }
        }
    }

    if (days == 28)
    {
        if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0)))
        {
            days = 29;
        }
    }
    printf("%d\n", days);
    return 0;
}