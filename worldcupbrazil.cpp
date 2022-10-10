#include <bits/stdc++.h>

using namespace std;

int main()
{

    for (int i = 0;; i++)
    {
        int n;
        cin >> n;
        if (getchar() == EOF)
            break;
        else
        {
            printf((n == 0) ? "Khong khieu nai!\n" : "Co khieu nai!\n");
        }
    }
}