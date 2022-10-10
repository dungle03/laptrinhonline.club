#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, s1 = 0, s2 = 0;
    while (n--)
    {
        scanf("%d", &a);
        if (a == 25)
        {
            s1 += a;
        }
        else
            s2 += a - 25;
    }
    printf((s1 >= s2) ? "YES" : "NO");
    return 0;
}
