#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1]; // mảng lưu dãy số
    int b[n + 1]; // mảng lưu số lần xuất hiện của từng số
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j]) //đếm số lần xuất hiện của từng số
            {
                b[i]++;
            }
        }
    }
    int Max = 1; // Vì các số đều xuất hiện ít nhất 1 lần => Max số lần xuất hiện = 1
    for (int i = 0; i < n; i++)
    {
        if (b[i] > Max) //tìm xem số nào đang xuất hiện nhiều nhất
        {
            Max = b[i];
        }
    }
    for (int i = n; i > 0; i--) // tìm số nào lớn hơn nếu có nhiều số có cùng số lần xuất hiện
    {
        if (b[i] == Max)
        {
            printf("%d", a[i]);
            break;
        }
    }

    return 0;
}