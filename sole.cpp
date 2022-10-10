#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        if (n % 2 == 0)
        {
            n--;
        }

        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}