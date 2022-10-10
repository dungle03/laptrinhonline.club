#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int kt(int a)
{
    for (int i = (int)sqrt(a); i > 1; i--)
    {
        if (a % (int)pow(i, 2) == 0)
            return i;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a;
    a.resize(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        int d = kt(a[i]);
        cout << d << " " << (int)(a[i] / (pow(d, 2))) << endl;
    }
    return 0;
}