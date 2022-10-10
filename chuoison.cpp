#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    do
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");

    } while (n != 0);

    return 0;
}