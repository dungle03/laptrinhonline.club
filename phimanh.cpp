#include <bits/stdc++.h>

int main()
{
    double a, b, temp;
    scanf("%lf%lf", &a, &b);

    printf("%.2lf%%", ((b - a) / a) * 100.0);

    return 0;
}