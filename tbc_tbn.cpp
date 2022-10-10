#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
    }
    int d1 = 0, d2 = 0;
    double s1 = 0, s2 = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            d1++;
            s1 += a[i];
        }
        else if (a[i] > 0)
        {
            d2++;
            s2 *= a[i];
        }
    }

    if (d1 > 0 && d2 > 0)
    {
        printf("%.5lf\n %.5lf", s1 / (double)d1, pow(s2, 1.0 / d2));
    }
    else if (d1 > 0 && d2 == 0)
    {
        printf("%.5lf\nkhong co so duong", s1 / (double)d1);
    }
    else if (d1 == 0 && d2 > 0)
    {
        printf("khong co so am\n%.5lf", pow(s2, 1.0 / d2));
    }
    else
        printf("khong co so am\nkhong co so duong");

    return 0;
}