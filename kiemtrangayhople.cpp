#include <bits/stdc++.h>
using namespace std;
bool nhuan(int n)
{
    if (n % 400 == 0)
        return true;
    else if (n % 4 == 0 && n % 100)
        return true;
    return false;
}
int main()
{
    int d, M, Y;
    cin >> d;
    cin.ignore();
    cin >> M;
    cin.ignore();
    cin >> Y;
    if (Y > 0)
    {
        if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12)
        {
            if (d < 1 || d > 31)
                cout << "Ngay khong hop le";
            else
                cout << "Ngay hop le";
        }
        if (M == 4 || M == 6 || M == 9 || M == 11)
        {
            if (d < 1 || d > 30)
                cout << "Ngay khong hop le";
            else
                cout << "Ngay hop le";
        }
        if (M == 2)
        {
            if (nhuan(Y) == true)
            {
                if (d < 1 || d > 29)
                    cout << "Ngay khong hop le";
                else
                    cout << "Ngay hop le";
            }
            else
            {
                if (d < 1 || d > 28)
                    cout << "Ngay khong hop le";
                else
                    cout << "Ngay hop le";
            }
        }
        if (M < 1 || M > 12)
            cout << "Ngay khong hop le";
    }
    else
        cout << "Ngay khong hop le";
}