#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, tich = 1;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        tich *= i;
    }
    cout << tich;

    return 0;
}