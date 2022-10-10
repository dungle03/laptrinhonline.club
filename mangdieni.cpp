#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i <= 9; i++)
    {
        printf("N[%d] = %d\n", i, n);
        n = n * 2;
    }

    return 0;
}