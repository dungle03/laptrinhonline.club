#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    // Chặt nhị phân
    long long n, k, L = 1, R = 2e9, M;
    scanf("%lld%lld", &n, &k);
    while (L < R)
    {
        M = (L + R) / 2;
        if (M - M / n == k)
        {
            L = M;
            break;
        }
        if (M - M / n > k)
        {
            R = M - 1;
        }
        else
            L = M + 1;
    }
    printf("%lld", L);
    return 0;
}