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
    string s;
    cin >> s;
    cout << s << endl;

    // Chữ hoa thành thường, thường thành hoa
    // -32 thành chữ Hoa, +32 thành chữ thường

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << (char)(s[i] + 32);
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cout << (char)(s[i] - 32);
        }
    }
    cout << endl;

    // Toàn chữ hoa

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cout << (char)(s[i] - 32);
        }
        else
            cout << s[i];
    }
    cout << endl;

    // Toàn chữ thường

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << (char)(s[i] + 32);
        }
        else
            cout << s[i];
    }
    cout << endl;

    // Nguyên âm "o,u,e,o,a,i" thì viết thường, còn lại viết hoa

    string c = s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            c[i] = c[i] - 32;
        if (c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
            c[i] = c[i] + 32;
    }
    cout << c << endl;

    // Bắt đầu chữ Hoa, rồi xen kẽ chữ thường chữ Hoa

    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                cout << (char)(s[i] - 32);
            }
            else
                cout << s[i];
        }
        if (i % 2 != 0)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                cout << (char)(s[i] + 32);
            }
            else
                cout << s[i];
        }
    }

    return 0;
}