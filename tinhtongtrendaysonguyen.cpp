#include <stdio.h>
int main()
{
    long long n, x, s = 0;
    scanf("%lld", &n);
    for (int i = 1, j = n; i <= n; i++, j--)
    {
        scanf("%lld", &x);
        s += j * x;
    }
    printf("%lld", s);

    return 0;
}