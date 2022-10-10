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
    int a, b;
    int x[102] = {}, dem = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        for (int j = a; j < b; j++)
        {
            if (x[j] == 0)
            {
                dem++;
                x[j] = 1;
            }
        }
        }
    cout << 100 - dem;

    return 0;
}