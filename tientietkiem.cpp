#include <stdio.h>
#include <math.h>
int main()
{
    double t, s, p;
    scanf("%lf%lf%lf", &t, &s, &p);
    double p1 = p / 100;
    double temp;
    int i = 0;
    while (temp < t)
    {
        i++;
        temp = s * pow((1 + p1), i); // Công thức tính lãi kép
    }
    printf("%d", i);
    return 0;
}