#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    map<double, string> M;
    for (int i = 1; i <= n; i++)
    {
        string masv;
        double diem;
        cin >> masv >> diem;
        if (diem >= 8)
            M[diem] = masv;
    }
    if (!M.empty())
        cout << M.rbegin()->second;
    else
        cout << "Diem toi thieu khong dat";
    return 0;
}