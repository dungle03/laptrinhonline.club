#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>

void cach1(char a[])
{
    printf("chuoi sau khi dao nguoc la: %s", strrev(a));
}

void cach2(char a[])
{
    int n = strlen(a);
    for (int i = n - 1; i >= 0; i--)
        printf("%c", a[i]);
}

void cach3(char s1[], char s2[])
{
    int n, i, j;
    n = strlen(s1);
    for (i = 0, j = n - 1; i <= n - 1, j >= 0; i++, j--)
        s2[i] = s1[j];
    s2[n] = '\0';
    printf("%s", s2);
}
int main()
{
    char a[100], b[100];
    printf("Moi nhap day ki tu: ");
    gets(a);
    // cach1(a);
    printf("\n");
    // cach2(a);
    printf("\n");
    cach3(a, b);
    return 0;
}