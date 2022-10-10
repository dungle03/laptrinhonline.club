#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, s = 0;
    scanf("%d%d", &x, &y);
    if (x < y)
    {
        for (int i = x + 1; i < y; i++)
            if (i % 2 != 0)
            {
                s += i;
            }
        printf("\n%d", s);
    }
    else if (x > y)
    {
        for (int i = y + 1; i < x; i++)
            if (i % 2 != 0)
            {
                s += i;
            }
        printf("\n%d", s);
    }
    else
        printf("\n%d", x - y);
    return 0;
}