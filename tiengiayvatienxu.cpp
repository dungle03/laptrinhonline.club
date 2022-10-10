#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double n;
    int a1, a2, a3, a4, a5, a6, b1, b2, b3, b4, b5, b6;
    scanf("%lf", &n);
    n = n * 100;
    a1 = n / 10000;
    a2 = (n - a1 * 10000) / 5000;
    a3 = (n - a1 * 10000 - a2 * 5000) / 2000;
    a4 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000) / 1000;
    a5 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000) / 500;
    a6 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500) / 200;
    printf("\nTien giay:\n");
    printf("%d to R$ 100.00\n", a1);
    printf("%d to R$ 50.00\n", a2);
    printf("%d to R$ 20.00\n", a3);
    printf("%d to R$ 10.00\n", a4);
    printf("%d to R$ 5.00\n", a5);
    printf("%d to R$ 2.00\n", a6);
    b1 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500 - a6 * 200) / 100;
    b2 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500 - a6 * 200 - b1 * 100) / 50;
    b3 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500 - a6 * 200 - b1 * 100 - b2 * 50) / 25;
    b4 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500 - a6 * 200 - b1 * 100 - b2 * 50 - b3 * 25) / 10;
    b5 = (n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500 - a6 * 200 - b1 * 100 - b2 * 50 - b3 * 25 - b4 * 10) / 5;
    b6 = n - a1 * 10000 - a2 * 5000 - a3 * 2000 - a4 * 1000 - a5 * 500 - a6 * 200 - b1 * 100 - b2 * 50 - b3 * 25 - b4 * 10 - b5 * 5;
    printf("Tien xu:");
    printf("\n%d dong xu R$ 1.00", b1);
    printf("\n%d dong xu R$ 0.50", b2);
    printf("\n%d dong xu R$ 0.20", b3);
    printf("\n%d dong xu R$ 0.10", b4);
    printf("\n%d dong xu R$ 0.05", b5);
    printf("\n%d dong xu R$ 0.01", b6);

    return 0;
}