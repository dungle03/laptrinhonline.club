#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double a, b, c, x1, x2, x3, x4, delta, t1, t2;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "-1" << endl;
            }
            else
                cout << "0" << endl;
        }
        else
        {
            if (-c / b < 0)
            {
                cout << "0" << endl;
            }
            else if (-c / b > 0)
            {
                cout << "2" << endl;
            }
            else
                cout << "1" << endl;
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            cout << "0" << endl;
        }
        else if (delta == 0)
        {
            if (-b / (2 * a) < 0)
            {
                cout << "0" << endl;
            }
            else if (-b / (2 * a) == 0)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << "2" << endl;
            }
        }
        else
        {
            t1 = (-b + sqrt(delta)) / (2 * a);
            t2 = (-b - sqrt(delta)) / (2 * a);
            if (t1 > 0 && t2 > 0)
            {
                cout << "4" << endl;
            }
            else if (t1 < 0 && t2 < 0)
            {
                cout << "0" << endl;
            }
            else if (t1 > 0 && t2 < 0)
            {
                cout << "2" << endl;
            }
            else if (t1 < 0 && t2 > 0)
            {
                cout << "2" << endl;
            }
            else if (t1 == 0 && t2 < 0)
            {
                cout << "1" << endl;
            }
            else if (t1 == 0 && t2 > 0)
            {
                cout << "3" << endl;
            }
            else if (t2 == 0 && t1 < 0)
            {
                cout << "1" << endl;
            }
            else if (t2 == 0 && t1 > 0)
            {
                cout << "3" << endl;
            }
        }

        return 0;
    }
}