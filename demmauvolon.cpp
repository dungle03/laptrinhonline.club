#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100)
    {
        return 0;
    }
    if (a == b && b == c)
        printf("1");
    else if (a == b || b == c || c == a)
        printf("2");
    else
        printf("3");

    return 0;
}