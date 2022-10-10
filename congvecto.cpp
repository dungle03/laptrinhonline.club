#include <stdio.h>
#include <math.h>
int main()
{
    int m, a[20005], b[20005];
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
        scanf("%d", &a[i]);
    for (int i = 1; i <= m; i++)
        scanf("%d", &b[i]);
    for (int i = 1; i <= m; i++)
        printf("\n%d", a[i] + b[i]);

    return 0;
}