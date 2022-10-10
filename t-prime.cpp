#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n)
{
    if (n < 2)
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Save time Input Output
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll q = sqrt(n);
        cout << (check(q) && q * q == n ? "YES" : "NO") << "\n";
    }

    return 0;
}