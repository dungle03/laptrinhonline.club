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
    cin >> n;
    ll a[n + 1], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll sumL = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sumL += a[i];
        if (sumL == sum - sumL + a[i])
        {
            cout << i + 1 << " ";
            cnt++;
        }
    }

    cout << endl;
    cout << cnt;

    return 0;
}