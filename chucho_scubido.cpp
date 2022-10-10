#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    int a[n], i, ok = 1, dem = -1;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1 && a[i - 1] == 1)
        {
            ok = 0;
        }
    }
    if (ok)
    {
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (a[i + 1] == 0 && a[i + 2] == 0)
                {
                    dem++;
                    i++;
                }
                else
                    dem++;
            }
        }
        printf("%d", dem);
    }
    else
        printf("khong qua duoc suoi");
    return 0;
}