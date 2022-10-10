#include <stdio.h>
#include <math.h>

int check(int a, int b, int c)
{
    return a < b + c && b < a + c && c < a + b;
}

int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf(check(a, b, c) + check(a, b, d) + check(a, c, d) + check(b, c, d) ? "S" : "N");

    return 0;
}