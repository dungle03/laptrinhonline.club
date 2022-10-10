#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    fflush(stdin);
    getline(cin, str);
    int n = str.length(), d = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i + 1] == str[0])
        {
            d++;
        }
    }
    cout << d;
}