#include <bits/stdc++.h>

void NhapMang(long int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }
}

void GiamDan(long int a[], int n)
{
    int temp, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int n, k, i;
    scanf("%d%d", &n, &k);

    long int a[100000];

    // nhap mang
    NhapMang(a, n);

    // sap xep lai mang ( giam dan )
    GiamDan(a, n);

    // xuat mang theo kq
    int sum = 0;
    if (k >= n)
    {
        for (i = 0; i < n; i++)
        {
            sum += a[i];
        }
        printf("%d", sum);
    }
    else
    {
        for (i = 0; i < k; i++)
        {
            sum += a[i];
        }
        printf("%d", sum);
    }

    return 0;
}