#include <stdio.h>
#include <math.h>
int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);

    if (x == 0 && y == 0)
        printf("Origem");
    else if (x != 0 && y == 0)
        printf("Eixo X");
    else if (x == 0 && y != 0)
        printf("Eixo Y");
    else
    {
        if (x > 0 && y > 0)
            printf("Q1");
        if (x < 0 && y > 0)
            printf("Q2");
        if (x < 0 && y < 0)
            printf("Q3");
        if (x > 0 && y < 0)
            printf("Q4");
    }

    return 0;
}