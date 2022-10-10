#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int max = 0;
    long long a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
    }
    long long b[max + 1] = {};
    for (int i = 1; i <= n; i++)
        b[a[i]]++;
    unsigned long long socap = 0;
    for (int i = 1; i <= max; i++)
    {
        if (b[i] > 1)
            socap += b[i] * (b[i] - 1) / 2; // chọn 2 cặp giống nhau trong dãy
    }
    cout << socap;
    return 0;
}