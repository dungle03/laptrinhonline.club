#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a[103];
    for (int i = 0; i < 100; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 100; i++)
    {
        if (a[i] <= 10)
        {
            if (a[i] - (int)a[i] == 0)
                printf("A[%d] = %0.0f\n", i, a[i]);
            else
                printf("A[%d] = %0.1f\n", i, a[i]);
        }
    }
}