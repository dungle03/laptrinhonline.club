#include <stdio.h>
#include <math.h>
#include <string.h>

struct SinhVien
{
    char ten[20];
    double diem;
};

int main()
{
    int n;
    SinhVien sv[100];
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    double TB = 0;
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nhap ten: ");
        gets(sv[i].ten);
        printf("Nhap diem: ");
        scanf("%lf", &sv[i].diem);
        TB += sv[i].diem;
    }
    TB /= n;
    printf("DIEM TRUNG BINH %.1lf\n", TB);

    for (int i = 0; i < n; i++)
    {
        double x = sv[i].diem;
        if (x > TB)
        {
            printf("%s %.1lf\n", sv[i].ten, x);
        }
    }

    return 0;
}