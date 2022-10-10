#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    int csc = 1;
    int d = a[2] - a[1];
    for (int i = 3; i <= n; i++)
        if (a[i] - a[i - 1] != d)
            csc = 0;
    if (csc)
        printf("\nDay la day cap so cong voi cong sai %d", d);
    else
        printf("\nDay khong la day cap so cong");

    return 0;
}