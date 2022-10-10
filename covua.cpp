#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, dem = 0;
    char a;

    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a == 't')
            dem += 1;
        else if (a == 'M' || a == 'T')
            dem += 3;
        else if (a == 'X')
            dem += 5;
        else if (a == 'H')
            dem += 9;
        else if (a == 'V')
            dem += 0;
    }
    cout << dem;

    return 0;
}