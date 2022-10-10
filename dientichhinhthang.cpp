#include <bits/stdc++.h>

using namespace std;

void dientich(double a, double b)
{
    double chieucao = (a - b) / 2;
    cout << setprecision(2) << fixed << (a + b) * chieucao / 2;
}
int main()
{
    double a, b;
    cin >> a >> b;
    if (a > b)
        dientich(a, b);
    else
        dientich(b, a);
    return 0;
}