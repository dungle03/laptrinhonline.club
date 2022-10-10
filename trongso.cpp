#include <stdio.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (a >= 0 && a <= 10 && b >= 0 && b <= 10 && c >= 0 && c <= 10)
    {
        a = 2 * a;
        b = 3 * b;
        c = 5 * c;

        double ketqua = (a + b + c) / (1.0 * (2 + 3 + 5));
        printf("Trung binh = %.1lf", ketqua);
    }
    else
        printf("Trung binh = 0");

    return 0;
}