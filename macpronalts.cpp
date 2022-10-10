#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    double a, b;
    double tien = 0;
    while (n--)
    {
        scanf("%lf%lf", &a, &b);
        if (a == 1001)
            a = 1.5;
        if (a == 1002)
            a = 2.5;
        if (a == 1003)
            a = 3.5;
        if (a == 1004)
            a = 4.5;
        if (a == 1005)
            a = 5.5;

        tien += a * b;
    }
    printf("%.2lf", tien);
    return 0;
}