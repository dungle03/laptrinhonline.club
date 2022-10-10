#include <stdio.h>
int main()
{
    long long n;
    long long mu;
    scanf("%ld", &n);
    for (long long i = 2; i <= n; i++)
    {
        mu = 0;
        while (n % i == 0)
        {
            mu++;
            n /= i;
        }
        if (mu >= 1)
            printf("\n%d %d", i, mu);
    }
}