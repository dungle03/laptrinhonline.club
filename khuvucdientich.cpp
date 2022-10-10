#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf", 0.5 * a * c);
    printf("\nCIRCULO: %.3lf", 3.14159 * c * c);
    printf("\nTRAPEZIO: %.3lf", 0.5 * c * (a + b));
    printf("\nQUADRADO: %.3lf", b * b);
    printf("\nRETANGULO: %.3lf", a * b);

    return 0;
}