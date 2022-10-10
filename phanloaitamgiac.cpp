#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0)
    {
        if (a < b + c && b < a + c && c < a + b)
        {
            if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            {
                printf("TAM GIAC VUONG\n");
                return 0;
            }

            if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
                printf("TAM GIAC TU\n");
            else
                printf("TAM GIAC NHON\n");

            if (a == b && b == c)
            {
                printf("TAM GIAC DEU\n");
                return 0;
            }
            if (a == b || b == c || a == c)
                printf("TAM GIAC CAN\n");
        }
        else
            printf("KHONG PHAI TAM GIAC\n");
    }

    return 0;
}