#include <bits/stdc++.h>
using namespace std;

#define ll long long

typedef struct
{
    int dai, rong, s;
} DienTich;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code
    DienTich hcn[105];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> hcn[i].dai >> hcn[i].rong;
        hcn[i].s = hcn[i].dai * hcn[i].rong;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (hcn[i].s < hcn[j].s)
            {
                DienTich temp = hcn[i];
                hcn[i] = hcn[j];
                hcn[j] = temp;
            }
        }
    }

    int dem = 0;
    for (int i = 1; i < n; i++)
    {
        if (hcn[i].s != hcn[0].s)
        {
            cout << hcn[i].dai << " " << hcn[i].rong;
            dem = 1;
            break;
        }
    }
    if (dem == 0)
    {
        cout << "NO";
    }

    return 0;
}