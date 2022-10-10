#include <stdio.h>
int main()
{
    long long n, x, sum = 0;
    scanf("%lld", &n);
    long long i, j;
    for (i = 1, j = n; i <= n; i++, j--)
    {
        scanf("%lld", &x);
        sum += j * x;
    }
    printf("%lld", sum);

    return 0;
}