#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[11][10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char b[11][10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char c[11][10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    int n;
    scanf("%d", &n);
    int t1 = n % 10;
    n /= 10;
    int t2 = n % 10;
    n /= 10;
    int t3 = n % 10;
    printf("%s%s%s", a[t3], b[t2], c[t1]);
    return 0;
}