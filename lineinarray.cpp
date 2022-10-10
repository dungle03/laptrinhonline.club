#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    double a[13][13], sum = 0;
    char c;
    scanf("\n%c", &c);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (i == n) // xét hàng thứ n
            {
                sum += a[i][j];
            }
        }
    }

    if (c == 'M')
    {
        printf("%.1lf", sum / 12);
    }
    if (c == 'S')
    {
        printf("%.1lf", sum);
    }

    return 0;
}