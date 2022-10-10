#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c < 24 && a + b + c >= 00)
        printf("%d", a + b + c);
    if (a + b + c >= 24)
        printf("%d", a + b + c - 24);
    if (a + b + c < 0)
        printf("%d", a + b + c + 24);
    return 0;
}