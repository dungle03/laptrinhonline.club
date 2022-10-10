#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a, b;

    while (n--)
    {
        scanf("%d%d", &a, &b);
        int sum = 0;

        if (a > b)
            swap(a, b);
        for (int i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
                sum += i;
        }

        printf("%d\n", sum);
    }
    return 0;
}