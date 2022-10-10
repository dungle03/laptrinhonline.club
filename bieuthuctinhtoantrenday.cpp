#include <stdio.h>
#include <math.h>
#define ll long long
int main()
{
    ll n, s1 = 0, s2 = 0, s3 = 0;
    scanf("%lld", &n);
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        s1 += pow(a[i], 2);
        s2 += a[i] * a[n - i + 1];
    }
    for (ll i = 1; i < n; i++)
        s3 += a[i] * a[i + 1];
    printf("%lld\n%lld\n%lld", s1, s2, s3);
    return 0;
}