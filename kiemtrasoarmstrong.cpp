#include <stdio.h>
#include <math.h>

int KiemtraSoArmstrong(int n)
{
    int temp1 = n, temp2, sum = 0;
    while (temp1 > 0)
    {
        temp2 = temp1 % 10;
        temp1 /= 10;
        sum += pow(temp2, 3);
    }
    if (sum == n)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int a;
    scanf("%d", &a);
    if (a < 100 || a > 999)
    {
        return 0;
    }
    printf(KiemtraSoArmstrong(a) ? "YES" : "NO");

    return 0;
}