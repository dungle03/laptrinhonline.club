#include <stdio.h>
int thoitien(int canthoi)
{
    int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0, dem5 = 0, dem6 = 0;
    while (canthoi >= 500)
    {
        canthoi -= 500;
        dem1++;
    }
    while (canthoi >= 100)
    {
        canthoi -= 100;
        dem2++;
    }
    while (canthoi >= 50)
    {
        canthoi -= 50;
        dem3++;
    }
    while (canthoi >= 10)
    {
        canthoi -= 10;
        dem4++;
    }
    while (canthoi >= 5)
    {
        canthoi -= 5;
        dem5++;
    }
    while (canthoi >= 1)
    {
        canthoi -= 1;
        dem6++;
    }
    int kq = dem1 + dem2 + dem3 + dem4 + dem5 + dem6;
    return kq;
}
int main()
{
    int n, thoi;
    scanf("%d", &n);
    thoi = 1000 - n;
    printf("%d", thoitien(thoi));
    return 0;
}