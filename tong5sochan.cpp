#include <stdio.h>
#include <math.h>
int main()
{
    for (int i = 0;; i++)
    {
        int x, sum = 0;
        scanf("%d", &x);
        if (x == 0)
            break;
        else
        {
            for (int i = x; i < x + 10; i++)
            {
                if (i % 2 == 0)
                {
                    sum += i;
                }
            }
            printf("%d\n", sum);
        }
    }

    return 0;
}