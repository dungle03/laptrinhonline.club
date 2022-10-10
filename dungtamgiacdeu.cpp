#include <iostream>
using namespace std;
void kiemtra(int n)
{
    double m;
    m = 360 / (180 - n * 1.0);

    if (m == (int)m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    int n;
    int a[100];
    do
    {
        cin >> n;
    } while (n < 0 || n > 100);
    for (int i = 1; i <= n; i++)
    {
        do
        {
            cin >> a[i];
        } while (a[i] <= 0 || a[i] >= 180);
    }
    for (int i = 1; i <= n; i++)
    {
        kiemtra(a[i]);
        cout << endl;
    }
}