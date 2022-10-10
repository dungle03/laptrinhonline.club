#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long
int main()
{
    ll n, k, i;
    scanf("%lld%lld", &n, &k);
    while (k--)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
            n--;
    }
    printf("%lld", n);
    return 0;
}