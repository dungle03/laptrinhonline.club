#include <bits/stdc++.h>
using namespace std;

// thuật toán kadane

int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum1 = 0;
    int sum2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
        sum2 = max(sum1, sum2);
        if (sum1 < 0)
        {
            sum1 = 0;
        }
    }
    printf("%d", sum2);

    return 0;
}
