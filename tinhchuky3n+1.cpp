#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    int n, dem = 1;
    int a[10000];
    scanf("%d", &n);
    a[0] = n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            a[dem++] = n;
        }
        else
        {
            n = 3 * n + 1;
            a[dem++] = n;
        }
    }
    printf("%d ", dem);
    for (int i = 0; i < dem; i++)
        printf("%d ", a[i]);

    return 0;
}