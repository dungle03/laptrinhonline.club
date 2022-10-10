#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0)
    {
        if (n % 2 == 0)
        {
            int tong;
            int k = floorf(n / 50);
            tong = n * 0.5 + k * 5;
            printf("%d", tong);
        }
        else
        {
            double tong;
            int k = floorf(n / 50);
            tong = (double)n * 0.5 + k * 5;
            printf("%.1lf", tong);
        }
    }
    else
        printf("ERROR");

    return 0;
}