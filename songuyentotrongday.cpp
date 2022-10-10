#include <stdio.h>
#include <math.h>
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int CheckSoNT(int n)
{
    if (n < 2)
        return 0;
    else
    {
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0)
                return 0;
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];
    nhap(a, n);
    for (int i = 0; i < n; i++)
        if (CheckSoNT(a[i]))
            printf("%d ", a[i]);

    return 0;
}