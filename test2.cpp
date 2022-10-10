#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n + 5], b[m + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int dem[m] = {};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] <= b[i])
            {
                dem[i]++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d\n", dem[i]);
    }

    return 0;
}