#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    long s, n, t;
    scanf("%ld%ld%ld", &s, &n, &t);

    long x = t / n - n;
    for (long i = 1; i < x + 0.5; i++)
    {
        if (i * (x - i) == s)
        {
            printf("%ld %ld", x - i, i);
            break;
        }
    }

    return 0;
}