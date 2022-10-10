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
    int t;
    cin >> t;
    ll n;
    while (t--)
    {
        cin >> n;
        cout << n * (n - 1) / 2 + 1 << endl; // cấp số cộng
    }

    return 0;
}