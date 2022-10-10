#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    double t;
    do
    {
        cin >> n;
    } while (n < 0 || n > 1000);
    t = n * 1.0;
    if (n > 100)
    {
        t = t + (n - 100) * 0.2;
    }
    if (n > 250)
    {
        t = t + (n - 250) * 0.5;
    }
    if (n > 500)
    {
        t = t + (n - 500) * 0.5;
    }
    cout << setprecision(3) << fixed << t;
}