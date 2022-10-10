#include <stdio.h>
int main()
{
    long long x1, x2, x3, y1, y2, y3;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &x2, &y2, &x3, &y3);

    if (x1 == x2)
        printf("%lld ", x3);
    else if (x1 == x3)
        printf("%lld ", x2);
    else
        printf("%lld ", x1);

    if (y1 == y2)
        printf("%lld", y3);
    else if (y1 == y3)
        printf("%lld", y2);
    else
        printf("%lld", y1);

    return 0;
}
