#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Max 100

void Nhap(char a[][Max], int *n)
{
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < *n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Xuat(char a[][Max], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}

void Check(char a[][Max], char b[][Max], int n, int m)
{
    int dem = 0, ok = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i][j] == a[i][j])
            {
                dem++;
                if (dem == m)
                {
                    ok = 1;
                }
                continue;
            }
        }
    }
    if (ok)
        cout << "Yes";
    else
        cout << "No";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    int n, m;
    cin >> n >> m;
    char a[Max][Max], b[Max][Max];
    Nhap(a, &n);
    Nhap(b, &m);

    // Xuat(a, n);
    // Xuat(b, m);

    Check(a, b, n, m);

    return 0;
}