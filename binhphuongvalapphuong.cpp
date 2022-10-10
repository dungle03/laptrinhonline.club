#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];

    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}