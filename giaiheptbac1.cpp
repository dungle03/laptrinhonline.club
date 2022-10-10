#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double a1, b1, c1, a2, b2, c2;
    double D, Dx, Dy, x, y;

    scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &c1, &a2, &b2, &c2);

    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0)
    {
        if (Dx + Dy == 0)
            printf("HE PHUONG TRINH VO SO NGHIEM");
        else
            printf("HE PHUONG TRINH VO NGHIEM");
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("x = %.3lf\ny = %.3lf", x, y);
    }
    return 0;
}