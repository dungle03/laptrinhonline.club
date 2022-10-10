#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c;
    while (n--)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (a > b)
            printf("LUI ");
        else if (a < b)
            printf("TIEN ");
        else
            printf("DUNG ");

        if (b > c)
            printf("LUI\n");
        else if (b < c)
            printf("TIEN\n");
        else
            printf("DUNG\n");
    }

    return 0;
}