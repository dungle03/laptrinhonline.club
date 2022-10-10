#include <stdio.h>
int main()
{
    double a[1000], s = 0;
    int dem = 0, dem1 = 0;
    for (int i = 1; i >= 1; i++)
    {
        scanf("%lf", &a[i]);
        dem++;
        if (a[i] < 0 || a[i] > 10)
        {
            continue;
        }
        dem1++;
        if (dem1 == 2)
        {
            break;
        }
    }
    for (int i = 1; i <= dem; i++)
    {
        if (a[i] < 0 || a[i] > 10)
        {
            printf("Nhap sai\n");
        }
    }
    for (int i = 1; i <= dem; i++)
    {
        if (a[i] >= 0 && a[i] <= 10)
        {
            s = s + a[i];
        }
    }
    printf("TB = %.2lf", s / 2.0);
}