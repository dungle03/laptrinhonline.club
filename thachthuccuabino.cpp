#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[6] = {0};
    int i;

    while (n > 0)
    {
        scanf("%d", &a[0]);
        for (i = 2; i < 6; i++)
            if (a[0] % i == 0)
            {
                a[i]++;
            }
        n--;
    }
    for (i = 2; i < 6; i++)
    {
        printf("%d Multiplo(s) de %d\n", a[i], i);
    }
    return 0;
}