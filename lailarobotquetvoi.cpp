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
    int n, k;
    cin >> n >> k;
    int arr[k + 1] = {}, sum = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        for (int i = a; i < b; i++)
        {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (arr[i] == 0)
        {
            sum++;
        }
    }

    cout << sum;

    return 0;
}