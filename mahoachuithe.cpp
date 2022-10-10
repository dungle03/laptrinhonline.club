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
    string s, x;
    getline(cin, s);

    int n;
    cin >> n;

    map<string, bool> D;

    while (n--)
    {
        cin >> x;
        D[x] = true;
    }

    stringstream ss(s);
    while (ss >> x)
    {
        cout << (D[x] ? string(x.size(), '*') : x) << " ";
    }

    return 0;
}