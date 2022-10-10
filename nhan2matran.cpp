#include <stdio.h>
#include <math.h>
int main()
{

    long long a[100][100], b[100][100], c[100][100], i, j, k, m, n, p;
    scanf("%lld%lld%lld", &m, &n, &p);

    // nhập ma trận 1
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lld", &a[i][j]);
        }
    }
    // nhập ma trận 2

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            scanf("%lld", &b[i][j]);
        }
    }

    // nhân 2 ma trận
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            for (k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%lld ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}