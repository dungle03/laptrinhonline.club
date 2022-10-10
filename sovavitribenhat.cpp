#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5], i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int Min = a[0], vitri = 0;
    for (i = 0; i < n; i++)
    {
        if (Min > a[i])
        {
            Min = a[i];
            vitri = i;
        }
    }
    printf("Menor valor: %d\n", Min);
    printf("Posicao: %d", vitri);

    return 0;
}