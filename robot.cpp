#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    // Code

    int x, y;
    cin >> x >> y;
    int cnt = 1;

    while (x && y)
    {
        if (x % 2 == 0)
        {
            int temp = x;
            x = y;
            y = temp;

            y = y / 2;
            cnt++;
        }

        else if (y % 2 != 0)
        {
            int temp = x;
            x = y;
            y = temp;

            x = (x + 1) / 2;
            cnt++;
        }
    }

    return 0;
}