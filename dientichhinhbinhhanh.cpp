#include <stdio.h>
#include <math.h>
int main()
{
    int goc;
    float x, y, h, s;
    scanf("%f%f", &x, &y);
    scanf("%d", &goc);
    h = y * sin(goc * 3.141592645 / 180);
    printf("%0.3lf", x * h);
    return 0;
}