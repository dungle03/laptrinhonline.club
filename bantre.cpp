#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int main()
{
    ll n, k, tong = 0, kichthuoc;
    scanf("%lld%lld", &n, &k);
    while (n--)
    {
        scanf("%lld", &kichthuoc);
        tong += kichthuoc / k;
    }

    printf("%lld", tong * 3 * k);
    return 0;
}