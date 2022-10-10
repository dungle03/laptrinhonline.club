#include <stdio.h>

int main()
{
    int x, mau = 0, dem = 0, a[100];
    scanf("%d", &x);
    int i = 1;
    a[0] = 0;
    while (x > 0)
    {
        mau = mau + i;
        dem++;
        i++;
        x = x - mau;
    }
    printf("%d", dem - 1);
    return 0;
}