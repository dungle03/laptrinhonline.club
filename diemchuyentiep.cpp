#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    int a[n], i, ok = 1, ok1 = 0, ok2 = 0, dem = 0;

    // ok1 kiểm tra TH ko có số 0 nào, ok2 kiểm tra TH ko có số 1 nào

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 1 || a[i] < 0)
        {
            ok = 0;
        }
    }

    // nhập 1 mảng, nếu k có số 0 nào thì in ra 0, ko có số 1 nào thì in ra -1
    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            ok1 = 1;
        }
        if (a[i] == 0)
        {
            ok2 = 1;
        }
    }

    if (ok)
    {
        if (ok1 != 0)
        {
            if (ok2 != 0)
            {
                for (i = 0; i < n; i++)
                {
                    if (a[i] == 1 && a[i - 1] == 0)
                    {
                        printf("%d ", i);
                    }
                }
            }
            else
                printf("0");
        }
        else
            printf("-1");
    }

    return 0;
}