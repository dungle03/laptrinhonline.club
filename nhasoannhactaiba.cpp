#include <bits/stdc++.h>

void kt(int a[])
{
    int d1 = 0, d2 = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a[i] > a[i + 1])
        {
            d1++;
        }
        if (a[i] < a[i + 1])
        {
            d2++;
        }
    }
    if (d1 == 7)
    {
        printf("GIAM");
    }
    if (d2 == 7)
    {
        printf("TANG");
    }
    if (d1 != 7 && d2 != 7)
    {
        printf("KHONGBIET");
    }
}

int main()
{
    int a[9];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    kt(a);
}