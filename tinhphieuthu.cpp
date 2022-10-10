#include <stdio.h>
#include <math.h>

int main()
{
    int a, a1, b, b1;
    double a2, b2;
    scanf("%d%d%lf", &a, &a1, &a2);
    scanf("%d%d%lf", &b, &b1, &b2);

    printf("VALOR A PAGAR: R$ %.2lf", a1 * a2 + b1 * b2);
    return 0;
}