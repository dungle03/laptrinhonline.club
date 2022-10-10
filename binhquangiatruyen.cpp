#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a, b, c;
    while (n--)
    {
        scanf("%lf%lf%lf", &a, &b, &c);
        printf("%.1lf\n", (a * 2 + b * 3 + c * 5) / 10);
    }

    return 0;
}