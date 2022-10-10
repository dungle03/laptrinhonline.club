#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int d = 0;
    int a[10], b[10];
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++)
        scanf("%d", &b[i]);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
            d++;
    }
    printf((d == 5) ? "Y" : "N");
    return 0;
}