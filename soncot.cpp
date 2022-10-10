#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k); // nhập n cột và k lọ sơn

    int kq = k; // giả sử số cách có thể sơn = số lọ sơn

    for (int i = 1; i < n; i++)
    {
        kq = kq * (k - 1);
    }
    printf("%d", kq);

    return 0;
}