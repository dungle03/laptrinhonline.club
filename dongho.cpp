#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b; // tránh tràn số, bản chất là a * b / ucln(a,b)
}

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
    ll a, b;
    cin >> n >> a;
    n--;
    while (n--)
    {
        cin >> b;
        a = lcm(a, b);
    }
    cout << a;

    return 0;
}