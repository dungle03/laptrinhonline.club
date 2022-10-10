#include <stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if (x <= 400)
    {
        printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 15%%", x + x * 15 / 100, x * 15 / 100);
    }
    else if (x >= 400.01 && x <= 800)
    {
        printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 12%%", x + x * 12 / 100, x * 12 / 100);
    }
    else if (x >= 800.01 && x <= 1200)
    {
        printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 10%%", x + x * 0.1, x * 0.1);
    }
    else if (x >= 1200.01 && x <= 2000)
    {
        printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 7%%", x + x * 0.07, x * 0.07);
    }
    else
    {
        printf("Luong: %.2f\nTien kiem duoc: %.2f\nTy le phan tram: 4%%", x + x * 0.04, x * 0.04);
    }
}