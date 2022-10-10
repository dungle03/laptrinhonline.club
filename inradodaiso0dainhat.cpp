#include <bits/stdc++.h>
using namespace std;

void InputArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int MaxLengthZeros(int a[], int n)
{
    int maxLength = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {

            // tìm số 0 tận cùng bên trái
            int tmpLeft = 0;
            while (tmpLeft < i && a[i - tmpLeft - 1] == 0)
            {
                tmpLeft++;
            }

            // tìm số 0 tận cùng bên phải
            int tmpRight = 0;
            while (tmpRight + i < n && a[i + tmpRight] == 0)
            {
                tmpRight++;
            }

            maxLength = max(maxLength, tmpLeft + tmpRight);
        }
    }

    return maxLength;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    InputArray(a, n);

    printf("%d", MaxLengthZeros(a, n));

    return 0;
}