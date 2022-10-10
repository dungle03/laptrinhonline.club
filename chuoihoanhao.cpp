#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string S;
    cin >> S;
    map<char, int> A;
    for (char x : S)
        A[x]++;
    for (auto p : A)
    {
        if (p.second % 2)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}