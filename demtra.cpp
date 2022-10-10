#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100], dem = 0, i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == n)
        {
            dem++;
        }
    }
    printf("%d", dem);

    return 0;
}