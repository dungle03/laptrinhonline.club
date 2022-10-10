#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double km, nl;
    cin >> km >> nl;
    printf((nl) ? "%.3lf km/l" : "0 km/l", km / nl);

    return 0;
}