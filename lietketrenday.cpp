#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int dem1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
        else
        {
            dem1++;
            if (dem1 == n)
            {
                printf("Day khong co so le");
                break;
            }
        }
    }
    printf("\n");
    int dem2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 5 == 2 || a[i] % 7 == 3)
        {
            printf("%d ", a[i]);
        }
        else
        {
            dem2++;
            if (dem2 == n)
            {
                printf("Day khong co so chia nam du hai hoac chia bay du ba");
                break;
            }
        }
    }
    printf("\n");
    int dem3 = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (2 * a[i] == a[i - 1] + a[i + 1])
        {
            printf("%d %d %d\n", a[i - 1], a[i], a[i + 1]);
        }
        else
        {
            dem3++;
            if (dem3 == n - 1)
            {
                printf("Day khong co so chia nam du hai hoac chia bay du ba");
                break;
            }
        }
    }

    return 0;
}