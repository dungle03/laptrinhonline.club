#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, max0, max1, max2, min0, min1, min2, d0 = 0, d1 = 0, d2 = 0, a[1000000];
    scanf("%lld", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            max0 = a[i];
            min0 = a[i];
        }
        if (a[i] > 0)
        {
            if (a[i] % 3 == 1)
            {
                d1++;
                max1 = a[i];
                min1 = a[i];
            }
            if (a[i] % 3 == 2)
            {
                d2++;
                max2 = a[i];
                min2 = a[i];
            }
        }
        if (a[i] < 0)
        {
            if (a[i] % 3 == -2)
            {
                d1++;
                max1 = a[i];
                min1 = a[i];
            }
            if (a[i] % 3 == -1)
            {
                d2++;
                max2 = a[i];
                min2 = a[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0 && a[i] > max0)
            max0 = a[i];
        if (a[i] % 3 == 0 && a[i] < min0)
            min0 = a[i];
        if (a[i] < 0 && a[i] % 3 == -2 && a[i] > max1)
            max1 = a[i];
        if (a[i] < 0 && a[i] % 3 == -2 && a[i] < min1)
            min1 = a[i];
        if (a[i] < 0 && a[i] % 3 == -1 && a[i] > max2)
            max2 = a[i];
        if (a[i] < 0 && a[i] % 3 == -1 && a[i] < min2)
            min2 = a[i];
        if (a[i] > 0 && a[i] % 3 == 1 && a[i] > max1)
            max1 = a[i];
        if (a[i] > 0 && a[i] % 3 == 1 && a[i] < min1)
            min1 = a[i];
        if (a[i] > 0 && a[i] % 3 == 2 && a[i] > max2)
            max2 = a[i];
        if (a[i] > 0 && a[i] % 3 == 2 && a[i] < min2)
            min2 = a[i];
    }
    if (d0 == 0)
        printf("Khong co so nao chia 3 du 0");
    else
        printf("%lld %lld", min0, max0);
    if (d1 == 0)
        printf("\nKhong co so nao chia 3 du 1");
    else
        printf("\n%lld %lld", min1, max1);
    if (d2 == 0)
        printf("\nKhong co so nao chia 3 du 2");
    else
        printf("\n%lld %lld", min2, max2);

    return 0;
}