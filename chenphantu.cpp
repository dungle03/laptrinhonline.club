#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n + 5], k, x;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> k >> x;

    n++;
    for (int i = n - 1; i > k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = x;

    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }

    return 0;
}