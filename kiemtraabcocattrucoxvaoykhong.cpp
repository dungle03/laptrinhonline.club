#include <stdio.h>
#include <math.h>
int main()
{
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    printf((x1 * x2 < 0 && y1 * y2 < 0) ? "YES" : "NO");

    return 0;
}