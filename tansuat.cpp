#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

    int a[100], b[100];
    int n, i, j, count;

    scanf("%d", &n);

    // nhap mang
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        b[i] = -1;
    }

    // sap xep lai mang
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // dem tan suat
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                count++;

                b[j] = 0;
            }
        }

        if (b[i] != 0)
        {
            b[i] = count;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            printf("%d xuat hien %d lan\n", a[i], b[i]);
        }
    }

    return 0;
}