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
    ll n, m, L, R;
    cin >> n >> m;

    ll a[n + 1] = {};
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    while (m--)
    {
        cin >> L >> R;
        cout << a[R] - a[L - 1] << endl;
    }

    return 0;
}