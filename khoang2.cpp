#include <stdio.h>
#include <math.h>
int main()
{
    int n, count1 = 0, count2 = 0;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] >= 10 && a[i] <= 20)
            count1++;
        else
            count2++;
    }
    printf("%d trong\n%d ngoai", count1, count2);

    return 0;
}