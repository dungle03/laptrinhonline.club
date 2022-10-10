#include <stdio.h>
#include <math.h>
#define ll long long

ll check(ll x1, ll y1, ll x2, ll y2)
{
    return pow((x1 - x2), 2) + pow((y1 - y2), 2);
}

int main()
{
    ll n, r;
    scanf("%lld%lld", &n, &r);
    ll xA, yA;
    scanf("%lld%lld", &xA, &yA);
    ll x[n + 2], y[n + 2], count = 0;
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld%lld", &x[i], &y[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (check(x[i], y[i], xA, yA) <= r * r)
        {
            count++;
        }
    }
    printf("%lld", (count * (count - 1)) / 2);

    return 0;
}