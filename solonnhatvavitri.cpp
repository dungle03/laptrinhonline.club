#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int dem;
    int a[1000], max;
    for (int i = 1; i <= 100; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[1];
    for (int i = 1; i <= 100; i++)
    {
        if (a[i] >= max)
        {
            max = a[i];
            dem = i;
        }
    }
    printf("%d\n%d", max, dem);
    return 0;
}
