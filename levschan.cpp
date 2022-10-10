#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int chan = 0, le = 0;
        if (a[i] % 2 == 0)
        {
            chan++;
            sum++;
        }
        else
            le++;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] % 2 == 0)
                chan++;
            else
                le++;

            if (chan >= le)
                sum++;
        }
    }
    printf("%d", sum);
    return 0;
}