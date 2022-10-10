#include <stdio.h>
#include <math.h>

int a[1000][1000];
int i, j;

void NhapMatran(int a[][1000], int m, int n)
{
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void TongTungHang(int a[][1000], int m, int n)
{
    for (i = 1; i <= m; i++)
    {
        int tong = 0;
        for (j = 1; j <= n; j++)
        {
            tong += a[i][j];
        }
        printf("%d ", tong);
    }
}

int MaxTungCot(int a[][1000], int m, int n, int cot)
{
    int Max = a[1][cot];
    for (i = 1; i <= m; i++)
    {
        if (a[i][cot] > Max)
        {
            Max = a[i][cot];
        }
    }
    return Max;
}
void timMaxCuaAllcot(int a[][1000], int m, int n)
{
    int cot = 1;
    while (cot <= n)
    {
        printf("%d ", MaxTungCot(a, m, n, cot));
        cot++;
    }
}

void Check(int a[][1000], int m, int n)
{
    double tong = 0;
    int dem = 0;
    for (i = 2; i <= m; i += 2)
    {
        for (j = 1; j <= n; j += 2)
        {
            if (a[i][j] % 3 == 0)
            {
                tong += a[i][j];
                dem++;
            }
        }
    }
    printf(dem ? "%.3lf" : "khong co so thoa man", tong / dem);
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    NhapMatran(a, m, n);
    TongTungHang(a, m, n);
    printf("\n");
    timMaxCuaAllcot(a, m, n);
    printf("\n");
    Check(a, m, n);

    return 0;
}