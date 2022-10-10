#include <stdio.h>
#include <math.h>
#include <string.h>

double TinhDienTich(double xa, double ya, double xb, double yb, double xc, double yc)
{
    double s = 0.5 * fabs((xa * yb - xb * ya) + (xb * yc - xc * yb) + (xc * ya - xa * yc));
    return s;
}

int main()
{
    double xA, yA, xB, yB, xC, yC, xM, yM;
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &xA, &yA, &xB, &yB, &xC, &yC, &xM, &yM);

    double d, dtMAB, dtMAC, dtMBC, dtABC;

    dtMAB = TinhDienTich(xM, yM, xA, yA, xB, yB);
    dtMAC = TinhDienTich(xM, yM, xA, yA, xC, yC);
    dtMBC = TinhDienTich(xM, yM, xB, yB, xC, yC);
    dtABC = TinhDienTich(xA, yA, xB, yB, xC, yC);

    d = dtMAB + dtMAC + dtMBC - dtABC;

    if (d > 0)
    {
        printf("M o ngoai tam giac");
    }
    else if (dtMAB == 0 || dtMAC == 0 || dtMBC == 0)
    {
        printf("M o tren canh tam giac");
    }
    else
    {
        printf("M o trong tam giac");
    }

    return 0;
}