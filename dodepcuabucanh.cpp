#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll sum(int a[], int b[], int n)
{
    ll res = 0;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            res += (a[i] - a[j]) * (a[i] - a[j]) + (b[i] - b[j]) * (b[i] - b[j]);
        }
    }
    return res;
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
    ll res = 0;
    scanf("%d", &n);
    int a[100001], b[100001];
    scanf("%d %d", &a[0], &b[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        res += (a[i] - a[0]) * (a[i] - a[0]) + (b[i] - b[0]) * (b[i] - b[0]);
    }
    res += sum(a, b, n);
    printf("%lld", res);

    return 0;
}
