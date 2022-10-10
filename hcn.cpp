#include <stdio.h>

int main()
{

    int p, a, s;
    scanf("%d%d", &p, &a);

    s = (((p * p) / 4) - a * a) / 2;

    printf("%.0lf", (double)s);
    return 0;
}