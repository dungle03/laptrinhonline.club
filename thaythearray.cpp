#include <stdio.h>
#include <math.h>
int main()
{
    int X[15];
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &X[i]);
        if (X[i] <= 0)
        {
            X[i] = 1;
        }
    }
    for (int i = 0; i <= 9; i++)
    {
        printf("X[%d] = %d\n", i, X[i]);
    }

    return 0;
}