#include <stdio.h>
#include <math.h>
int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("Trung binh = %.5lf", (a * 3.5 / 11 + b * 7.5 / 11));

    return 0;
}