#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
int main()
{
    // Bai4
    int n;
    scanf("%d", &n);
    int tong = 0;
    while (n != 0)
    {
        tong += n % 10;
        n /= 10;
    }

    printf("%d", tong);
    return 0;
}