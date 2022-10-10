#include <stdio.h>
#include <math.h>

void Tachsothanhtich(long long a, long long b)
{
    long long temp1, temp2;
    temp1 = a;

    for (int i = 10; temp1 != 0; i *= 10)
    {
        temp1 = temp1 / 10;
        temp2 = a % i;

        if (temp1 * temp2 == b)
        {
            printf("%lld %lld\n", temp1, temp2);
            break;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    long long a, b;

    while (n--)
    {
        scanf("%lld%lld", &a, &b);
        Tachsothanhtich(a, b);
    }

    return 0;
}