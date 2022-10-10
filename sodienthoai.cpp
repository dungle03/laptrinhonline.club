#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    if (s[0] == '0' && s[9] != '4' && s[9] != '7' && s[9] != '9')
        cout << "YES";
    else
        cout << "NO";
    return 0;
}