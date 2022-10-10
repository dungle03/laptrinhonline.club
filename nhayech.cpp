#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int h, n;
    scanf("%d%d", &h, &n); // nhập chiều cao nhảy ếch và nhập số ống
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int dem = 0;
    for (int i = 0; i < n - 1; i++) // cho chạy đến cột t2 từ cuối lên
    {
        // đứng ở vị trí hiện tại mà nhảy theo chiều cao h > chiều cao cột sau thì đếm
        if ((a[i] + h) > a[i + 1])
        {
            dem++;
        }
    }
    // kiểm tra nếu có thể vượt qua tất cả thì win, k thì game over
    printf((dem == n - 1) ? "YOU WIN" : "GAME OVER");

    return 0;
}