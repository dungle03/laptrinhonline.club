#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    while (n--)
    {
        scanf("%d", &a);
        printf("%d\n", a % 2);
    }

    return 0;
}