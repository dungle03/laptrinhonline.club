#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 256
int main()
{
    char a[1000];
    gets(a);
    if (strlen(a) <= 140)
        printf("TWEET");
    else
        printf("MUTE");

    return 0;
}