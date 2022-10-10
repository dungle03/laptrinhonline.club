#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    double a[13][13];
    for (int i = 1; i <= 12; i++)
        for (int j = 1; j <= 12; j++)
            scanf("%lf", &a[i][j]);
    double tong = 0, dem = 0;
    for (int i = 2; i <= 12; i++)
        for (int j = 12 - i + 2; j <= 12; j++)
        {
            tong += a[i][j];
            dem++;
        }
    if (x == 'S')
        printf("%.1lf", tong);
    if (x == 'M')
        printf("%.1lf", (double)tong / dem);
}