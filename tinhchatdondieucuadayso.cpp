#include <stdio.h>
int main()
{
    int n, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    scanf("%d", &n);
    int a[n + 500];
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i + 1])
            count5++;
        if (a[i] < a[i + 1])
            count1++;
        if (a[i] <= a[i + 1])
            count2++;
        if (a[i] >= a[i + 1])
            count3++;
        if (a[i] > a[i + 1])
            count4++;
    }
    if (count5 == n - 1)
        printf("Day bang nhau");
    else if (count1 == n - 1)
        printf("Day don dieu tang ngat");
    else if (count2 == n - 1)
        printf("Day don dieu tang");
    else if (count4 == n - 1)
        printf("Day don dieu giam ngat");
    else if (count3 == n - 1)
        printf("Day don dieu giam");
    else
        printf("Day khong don dieu");
    return 0;
}