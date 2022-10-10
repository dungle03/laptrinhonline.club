#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    double s = 1;
    for (int i = 2; i <= 100; i++)
    {
        s += 1.0 / i;
    }
    printf("%0.6lf", s);
    return 0;
}