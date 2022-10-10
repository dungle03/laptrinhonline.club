#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    char s1[1000003]; // n < 10^6
    scanf("%s", s1);
    long len = strlen(s1);
    // số có 1 chữ số
    if (len <= 9)
        s1[1] = '\0';
    // số có 2 chữ số
    else if (len > 9 && len <= 189) // số có 2 chữ số từ 10->99 có 180 số + 9 chữ số của TH đầu, tương tự bên dưới
        s1[2] = '\0';
    // số có 3 chữ số
    else if (len > 189 && len <= 2889) // 100 -> 999 có 2700 + 189 chữ số của TH thứ 2
        s1[3] = '\0';
    // số có 4 chữ số
    else if (len > 2889 && len <= 38889) // 1000 -> 9999 có 36000 + 2889 chữ số của TH thứ 3
        s1[4] = '\0';
    // số có 5 chữ số
    else if (len > 38889 && len <= 488889) // 10000 -> 99999 có 45000 + 38889 chữ số của TH thứ 4
        s1[5] = '\0';
    // số có 6 chữ số
    else
        s1[6] = '\0';
    printf("%s", s1);

    return 0;
}