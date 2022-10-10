#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d", &a);
    int n;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    int s = 0;
    for (int i = a; i < a + n; i++)
    {
        s += i;
    }
    printf("%d", s);
    return 0;
}