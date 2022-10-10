#include <stdio.h>
#include <math.h>
#include <string.h>

void NhapMang(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i + 1);
        scanf("%lf", &a[i]);
    }
}

void XuatMang(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf\t", a[i]);
    }
}

double Maxday(double a[], int n)
{
    if (n == 1)
        return a[n];
    else
        return Maxday(a, n - 1) > a[n] ? Maxday(a, n - 1) : a[n];
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    double a[n];
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\nMax cua day = %.2lf", Maxday(a, n));
}