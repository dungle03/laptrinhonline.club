#include <bits/stdc++.h>
using namespace std;
int uoc(long int n)
{
    long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i % 2 == 1)
            sum += i;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    long int x, y;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        long int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += uoc(i);
        }
        cout << sum << "\n";
    }
}