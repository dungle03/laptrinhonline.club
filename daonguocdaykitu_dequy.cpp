#include <stdio.h>
#include <string.h>

void dao_Chuoi()
{
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        dao_Chuoi();
        printf("%c", c);
    }
}

int main()
{
    dao_Chuoi();
    return 0;
}