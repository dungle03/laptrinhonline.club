#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int main()
{
    int n;
    scanf("%d", &n);
    long long a, b;
    while (n--)
    {
        scanf("%lld%lld", &a, &b);
        printf("%lld\n", a * b);
    }
    return 0;
}