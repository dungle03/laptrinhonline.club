#include <stdio.h>

long long SoHoanHao(long long x)
{
    long long sum = 1, i;

    for (i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if (i * i != x)
                sum = sum + i + x / i;
            else
                sum = sum + i;
        }
    }

    if (sum == x && x != 1)
        return 1;

    return 0;
}

int main()
{
    int n, i;
    scanf("%d", &n);

    long long a;
    while (n--)
    {
        scanf("%lld", &a);

        if (SoHoanHao(a))
        {
            printf("%lld eh perfeito\n", a);
        }
        else
            printf("%lld nao eh perfeito\n", a);
    }

    return 0;
}