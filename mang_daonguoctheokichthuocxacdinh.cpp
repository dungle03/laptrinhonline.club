#include <bits/stdc++.h>
using namespace std;

// Đảo ngược mảng theo nhóm có kích thước nhất định

void DaoNguoc(int a[], int n, int k)
{
    for (int i = 0; i < n; i += k)
    {
        int left = i;

        int right = min(i + k - 1, n - 1);

        while (left < right)
            swap(a[left++], a[right--]);
    }
}

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int a[100000], i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    DaoNguoc(a, n, k);

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}