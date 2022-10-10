#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    int n;
    scanf("%d", &n);
    while (n--)
    {
        ll x;
        scanf("%lld", &x);
        printf("%lld\n", x / 3 + x / 5 + x / 7 - (x / 15 + x / 21 + x / 35) + x / 105);
    }
    return 0;
}