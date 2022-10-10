#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char ten[1000];
    gets(ten);
    printf((strlen(ten) < 31) ? "CO" : "KHONG");
    return 0;
}