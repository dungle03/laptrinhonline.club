#include <stdio.h>
#include <math.h>
int main()
{
    int n, c, d;
    scanf("%d%d%d", &n, &c, &d);
    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= -c && a[i] <= d)
        {
            count1++;
        }
    }
    printf("%d", count1);

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            count++;
        }
    }

    printf((count == n - 1) ? "\nYES" : "\nNO");

    return 0;
}
