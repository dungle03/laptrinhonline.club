#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int sum = 0;
    if (a > b)
    {
        for (int i = b; i <= a; i++)
        {
            if (i % 13 != 0)
            {
                sum += i;
            }
        }
    }
    if (a < b)
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 13 != 0)
            {
                sum += i;
            }
        }
    }
    printf("%d", sum);

    return 0;
}