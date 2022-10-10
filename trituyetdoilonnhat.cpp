#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    int n;
    scanf("%d", &n);
    long long a[n + 5], max = LONG_MIN, max2 = LONG_MIN, min = LONG_MAX, min2 = LONG_MAX;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > max2 && a[i] != max)
            max2 = a[i];
        if (a[i] < min2 && a[i] != min)
            min2 = a[i];
    }
    if (abs(min2 + min) > abs(max2 + max))
        printf("%lld", abs(min2 + min));
    else
        printf("%lld", abs(max2 + max));

    return 0;
}