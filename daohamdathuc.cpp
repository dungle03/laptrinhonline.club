#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int a[1000];
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    double x, S = 0;

    scanf("%lf", &x);

    for (i = 1; i <= n; i++)
    {
        S += i * a[i] * pow(x, i - 1);
    }

    printf("\n%.3f", S);
}