#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b)
        printf("Tran dau keo dai %d gio", b - a);
    else
        printf("Tran dau keo dai %d gio", 24 - a + b);
    return 0;
}