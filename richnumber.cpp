#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;

    scanf("%d", &n);
    if (n < 1)
    {
        printf("Poor Number");
    }
    else
    {

        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum > n)
        {
            printf("Rich Number");
        }
        else
            printf("Poor Number");
    }
}