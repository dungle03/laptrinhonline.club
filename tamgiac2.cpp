#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0)
    {
        if (a < b + c && b < a + c && c < a + b)
        {
            if (a == b && b == c)
            {
                printf("Valido-Equilatero\n");
                goto Check;
            }
            else if (a == b || b == c || a == c)
            {
                printf("Valido-Isoceles\n");
                goto Check;
            }

            else if (a < b + c && b < a + c && c < a + b)
            {
                printf("Valido-Escaleno\n");
                goto Check;
            }
        }
        else
        {
            printf("Invalido\n");
            return 0;
        }
    }

Check:

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
    {
        printf("Retangulo: S\n");
    }
    else
        printf("Retangulo: N\n");

    return 0;
}