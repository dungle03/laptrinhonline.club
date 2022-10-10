#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, x3, x4, delta, t1, t2;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("vo so nghiem");
            }
            else
            {
                printf("vo nghiem");
            }
        }
        else
        {
            if (-c / b < 0)
            {
                printf("vo nghiem");
            }
            else if (-c / b == 0)
            {
                printf("0.000");
            }
            else
            {
                x1 = 1.0 * sqrt(-c / b);
                x2 = -1.0 * sqrt(-c / b);

                printf("%.3lf\n%.3lf", x1, x2);
            }
        }
    }
    delta = b * b - 4 * a * c;
    if (a != 0)
    {
        if (delta < 0)
        {
            printf("vo nghiem");
        }
        else if (delta == 0)
        {
            if (-b / (2 * a) < 0)
            {
                printf("vo nghiem");
            }
            else
            {
                x1 = 1.0 * sqrt(-b / (2 * a));
                x2 = -1.0 * sqrt(-b / (2 * a));

                printf("%.3lf\n%.3lf", x1, x2);
            }
        }
        else
        {
            t1 = 1.0 * (-b + sqrt(delta)) / (2 * a);
            t2 = 1.0 * (-b - sqrt(delta)) / (2 * a);
            if (t1 > 0 && t2 > 0)
            {
                x1 = 1.0 * sqrt(t1);
                x2 = 1.0 * sqrt(t2);
                x3 = -1.0 * sqrt(t1);
                x4 = -1.0 * sqrt(t2);

                printf("%.3lf\n%.3lf\n%.3lf\n%.3lf", x1, x2, x3, x4);
            }
            else if (t1 < 0 && t2 < 0)
            {
                printf("vo nghiem");
            }
            else if (t1 > 0 && t2 < 0)
            {
                x1 = 1.0 * sqrt(t1);
                x3 = -1.0 * sqrt(t1);

                printf("%.3lf\n%.3lf", x1, x3);
            }
            else if (t1 < 0 && t2 > 0)
            {
                x2 = 1.0 * sqrt(t2);
                x4 = -1.0 * sqrt(t2);

                printf("%.3lf\n%.3lf", x2, x4);
            }
            else if (t1 == 0 && t2 < 0)
            {
                printf("0.000");
            }
            else if (t1 == 0 && t2 > 0)
            {
                printf("0.000");
                x2 = 1.0 * sqrt(t2);
                x4 = -1.0 * sqrt(t2);
                printf("%.3lf\n%.3lf", x2, x4);
            }
            else if (t2 == 0 && t1 < 0)
            {
                printf("0.000");
            }
            else if (t2 == 0 && t1 > 0)
            {
                printf("0.000\n");
                x1 = 1.0 * sqrt(t1);
                x3 = -1.0 * sqrt(t1);
                printf("%.3lf\n%.3lf", x1, x3);
            }
        }
    }
}