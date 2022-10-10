#include <bits/stdc++.h>
using namespace std;

void kt(int a, int b)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        printf("%d ", i);
        sum += i;
    }
    printf("Tong=%d\n", sum);
}

int main()
{
    int a[1000], b[1000], loop = 0;
    for (int i = 0; i < 1000; i++)
    {
        scanf("%d%d", &a[i], &b[i]);
        if (a[i] > b[i])
            swap(a[i], b[i]);
        if (a[i] <= 0)
            break;

        loop++;
    }
    for (int i = 0; i < loop; i++)
    {
        kt(a[i], b[i]);
    }

    return 0;
}