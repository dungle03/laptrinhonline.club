#include <stdio.h>

void nhapham(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void kt(int arr[], int n)
{
    int i;
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[3];
    int a[3], b[3], c[3];

    nhapham(a, n);
    nhapham(b, n);

    // for (i = 1; i <= n; i++)
    // {
    //     scanf("%d%d%d", &a[i], &b[i], &c[i]);
    // }

    // for (i = 1; i <= n - 1; i++)
    // {
    //     if (a[i] > a[i + 1])
    //     {
    //         printf("LUI ");
    //     }
    //     else if (a[i] < a[i + 1])
    //     {
    //         printf("TIEN ");
    //     }
    //     else
    //         printf("DUNG ");
    // }

    // for (i = 1; i <= n - 1; i++)
    // {
    //     if (b[i] > b[i + 1])
    //     {
    //         printf("LUI ");
    //     }
    //     else if (b[i] < b[i + 1])
    //     {
    //         printf("TIEN ");
    //     }
    //     else
    //         printf("DUNG ");
    // }

    // for (i = 1; i <= n - 1; i++)
    // {
    //     if (c[i] > c[i + 1])
    //     {
    //         printf("LUI ");
    //     }
    //     else if (c[i] < c[i + 1])
    //     {
    //         printf("TIEN ");
    //     }
    //     else
    //         printf("DUNG ");
    // }

    // for (i = 1; i <= n; i++)
    // {
    //     printf("%d %d %d\n", a[i], b[i], c[i]);
    // }
}