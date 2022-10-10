#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double a[10004], s1 = 0, s2 = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%lf", &a[i]);

    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        if (count && s1 + a[i] >= 0)
            s1 = sqrt(s1 + a[i]);
        else
            count = 0;
    }
    printf((count == 1) ? "%.3lf\n" : "Khong tinh duoc S1\n", s1);

    count = 1;
    for (int i = n; i >= 1; i--)
    {
        if (count && s2 + a[i] >= 0)
            s2 = sqrt(s2 + a[i]);
        else
            count = 0;
    }
    printf((count == 1) ? "%.3lf\n" : "Khong tinh duoc S2\n", s2);
    return 0;
}