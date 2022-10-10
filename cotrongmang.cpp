#include <stdio.h>
int main()
{
    double a[12][12];
    int n, i, j;
    scanf("%d", &n);
    char kt;
    scanf("\n%c", &kt);

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    double sum = 0;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (j == n) // xét cột thứ n
            {
                sum += a[i][j];
            }
        }
    }

    if (kt == 'S')
    {
        printf("%.1lf", sum);
    }
    if (kt == 'M')
    {
        printf("%.1lf", (double)sum / 12.0);
    }

    return 0;
}