#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    if (n < 50)
        cout << n * 100;
    if (n >= 50 && n < 1000)
        cout << n * 500;
    if (n >= 1000 && n < 10000)
        cout << n * 1000;
    if (n >= 10000)
        cout << n * 1200;
}