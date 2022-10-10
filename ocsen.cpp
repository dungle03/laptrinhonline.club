#include <stdio.h>
#include <math.h>
int main()
{
    long a, b, h, ngay = 0, diduoc = 0;
    scanf("%ld%ld%ld", &a, &b, &h);

    while (diduoc < h)
    {
        ngay++;
        diduoc += a;
        if (diduoc < h)
        {
            diduoc -= b;
        }
    }
    printf("%ld", ngay);

    return 0;
}