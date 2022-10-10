#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (abs(a - b) < abs(c - b))
        cout << "CAT_A";
    else if (abs(a - b) > abs(c - b))
        cout << "CAT_B";
    else
        cout << "The mouse has escaped";

    return 0;
}