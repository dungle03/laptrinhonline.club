#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    if (n >= 3)
    {
        printf("%lld", n * (n - 1) * (n - 2) / 6);
    }
    else
        printf("0");

    return 0;
}