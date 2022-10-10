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
    int a[n + 5];
    map<int, bool> X;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        X[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (X[a[i]] != 0) // kiểm tra xem đã xuất hiện chưa, chưa thì cho hiện, rồi thì thôi
        {
            cout << a[i] << " ";
            X[a[i]] = 0;
        }
    }

    return 0;
}