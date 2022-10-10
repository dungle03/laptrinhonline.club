#include <stdio.h>
#include <math.h>

int main()
{
    int n, dem = 0;
    int s = 0, trungbinh;
    int a[2000];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        s = s + a[i];
    }
    trungbinh = s / n;
    printf("%d ", trungbinh);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < trungbinh)
        {
            dem++;
        }
    }
    printf("%d", dem);
    return 0;
}