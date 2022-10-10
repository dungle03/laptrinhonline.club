#include <stdio.h>
int main()
{
    int n, s, count = 0;
    scanf("%d%d", &n, &s);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i + j >= s - n && i + j <= s)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}