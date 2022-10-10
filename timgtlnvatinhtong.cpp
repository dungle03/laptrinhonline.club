#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    double Max = (a[1] / (double)(n));
    for (int i = 1; i <= n; i++)
    {
        if (Max < (a[i] / (n - i + 1)))
            Max = (a[i] / (double)(n - i + 1));
    }
    printf("%.2lf\n", Max);
    long long sum = 0;
    if (n == 1)
    {
        printf("%d", a[1]);
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            sum += (a[i] + a[i + 1]);
        }
        printf("%lld", sum);
    }

    return 0;
}
