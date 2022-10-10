#include <stdio.h>
#include <math.h>
int main()
{
    long long a1[10001], a2[10001], i, j;
    for (i = 0; i < 3; i++)
    {
        scanf("%lld", &a1[i]);
        a2[i] = a1[i];
    }
    long long temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (a1[i] > a1[j])
            {
                temp = a1[i];
                a1[i] = a1[j];
                a1[j] = temp;
            }
        }
    }
    long long sum = 0;
    for (i = 0; i < 3; i++)
    {
        printf("%lld\n", a1[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%lld\n", a2[i]);
    }

    return 0;
}