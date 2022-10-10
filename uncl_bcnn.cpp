#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, UCLN, BC;
    while (1)
    {
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0 || a < 0 || b < 0)
        {
            break;
        }
        else if (a == 0 || b == 0)
        {
            printf("%d", (a == 0) ? b : a);
            break;
        }
        else
        {
            BC = a * b;
            while (a != b)
            {
                if (a > b)
                {
                    a = a - b;
                }
                else
                {
                    b = b - a;
                }
            }
            UCLN = b;
        }
        printf("%d %d\n", UCLN, BC / UCLN);
    }
    return 0;
}