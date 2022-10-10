#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int k;
        string s;
        cin >> k >> s;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < k; j++)
                cout << s[i];
        }
        cout << endl;
    }
}