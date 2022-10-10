#include <bits/stdc++.h>
using namespace std;
bool ch11(string s)
{
    int tongl = 0, tongc = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
            tongc += s[i] - 48;
        else
            tongl += s[i] - 48;
    }
    if ((tongl - tongc) % 11 == 0)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (ch11(s) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}