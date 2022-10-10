#include <stdio.h>

int Xoa_zero(int n)
{

    int r, num = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        if (r != 0)
        {
            num = num * 10 + r;
        }
    }

    n = num;
    num = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        num = num * 10 + r;
    }

    return num;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if (Xoa_zero(a) + Xoa_zero(b) == Xoa_zero(a + b))
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}