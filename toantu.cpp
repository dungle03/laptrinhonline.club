#include <stdio.h>
#include <math.h>
int main()
{
    long a, b;
    scanf("%ld%ld", &a, &b);

    printf("%ld+%ld=%ld\n", a, b, a + b);
    printf("%ld-%ld=%ld\n", a, b, a - b);
    printf("%ld*%ld=%ld\n", a, b, a * b);
    if (b != 0)
    {
        printf("%ld/%ld=%ld\n", a, b, a / b);
        printf("%ld%%%ld=%ld\n", a, b, a % b);
    }
    else
    {
        printf("0\n");
        printf("0\n");
    }

    return 0;
}