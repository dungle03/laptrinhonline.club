#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n, a, b;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d%d", &a, &b);
        int sum = 0;
        if (a % 2 == 0)
        {
            a++;
        }
        printf("%d\n", (a + b - 1) * b);
    }
    return 0;
}