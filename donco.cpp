#include <iostream>
using namespace std;

int main()
{
    long a, b, x, y;
    cin >> a >> b;

    x = (a + b) / (a - b);
    y = (x - 1) * a;
    if (y - (x + 1) * b != 0 || y - (x - 1) * a != 0 || x < 0 || y < 0)
        cout << "HUY HON";
    else
        cout << x << " " << y;
}