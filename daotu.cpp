#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

char chuoi1[10000], chuoi2[10000];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    fflush(stdin);
    gets(chuoi1);

    for (int i = strlen(chuoi1) - 1; i >= 0; i--)
    {
        if (chuoi1[i] == ' ')
        {
            strcat(strcat(chuoi2, chuoi1 + i + 1), " ");
            chuoi1[i] = '\0';
        }
    }
    strcat(chuoi2, chuoi1);
    cout << chuoi2;

    return 0;
}