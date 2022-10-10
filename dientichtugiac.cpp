#include <stdio.h>
#include <math.h>
int main()
{
    double x1, x2, x3, x4;
    double y1, y2, y3, y4;

    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    printf("%.2lf", fabs(x1 * y2 - x2 * y1 + x2 * y3 - x3 * y2 + x3 * y4 - x4 * y3 + x4 * y1 - x1 * y4) / 2);

    return 0;
}