#include <stdio.h>
#include <math.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    int a[n + 1];
    if (n < 3)
        printf("0");
    if (n >= 3)
    {
        long long int demc = 0, deml = 0, kq;

        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (abs(a[i]) % 2 != 0)
                ++deml;
            else
                ++demc;
        }

        if (demc < 2)
            kq = deml * (deml - 1) / 2 * demc; // nếu chỉ có 1 số chẵn => kq = tổ hợp chập 2 của deml * demC (1)
        if (demc > 2 && deml < 1)
            kq = demc * (demc - 1) * (demc - 2) / 6; // nếu có nhiều hơn 2 số chẵn và không có số lẻ nào => kq = tổ hợp chập 3 của demC (2)
        if (demc > 2 && deml >= 1)
            kq = demc * (demc - 1) * (demc - 2) / 6 + demc * deml * (deml - 1) / 2; // nếu có nhiều hơn 2 số chẵn và có ít nhất 1 số lẻ => kq = (1) + (2)
        printf("%lld", kq);
    }
    return 0;
}
