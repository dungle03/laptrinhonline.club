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
    ll n;
    ll sum = 0;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll num;
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.begin() + n);
    for (ll i = 0; i < n; i++)
    {
        ll k = (a[i] * i) - (a[i] * (n - i - 1));
        sum += k;
    }
    cout << sum;

    return 0;
}