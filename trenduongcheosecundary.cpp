#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    char x;
    scanf("%c", &x);
    double a[13][13];
    for (int i = 1; i <= 12; i++)
        for (int j = 1; j <= 12; j++)
            scanf("%lf", &a[i][j]);
    double tong = 0, dem = 0;
    for (int i = 1; i <= 12; i++)
        for (int j = 1; j <= 12 - i; j++)
        {
            tong += a[i][j];
            dem++;
        }
    if (x == 'S')
        printf("%.1lf", tong);
    if (x == 'M')
        printf("%.1lf", (double)tong / dem);
    return 0;
}