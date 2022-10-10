#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
int main()
{
    char a[1000];
    printf("Moi nhap day ki tu: \n");
    gets(a);
    int hoa = 0, thuong = 0, so = 0, khac = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
            hoa++;
        else if (a[i] >= 97 && a[i] <= 122)
            thuong++;
        else if (a[i] >= 48 && a[i] <= 57)
            so++;
        else
            khac++;
    }
    printf("\nSo chu thuong: %d", thuong);
    printf("\nSo chu Hoa: %d", hoa);
    printf("\nSo chu so: %d", so);
    printf("\nSo ki tu khac: %d", khac);

    return 0;
}