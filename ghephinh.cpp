#include <bits/stdc++.h>
using namespace std;
int main()
{
    long x, y, a, b;
    cin >> x >> y >> a >> b;
    long max1 = x > y ? x : y;
    long max2 = a > b ? a : b;
    if ((x + a == y || x + b == y || y + a == x || y + b == x) && max1 == max2)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}