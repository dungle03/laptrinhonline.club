#include <bits/stdc++.h>

#define Max 65000

int Nhapmang(int a[], int n)
{

  if (n == 0)
  {
    return 0;
  }

  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  if (a[i] == 0)
  {
    return 0;
  }

  return 1;
}

int TBC(int a[], int n)
{
  if (n == 0)
  {
    return 0;
  }
  int tong = 0, dem = 0, kq = 0;
  int i;
  for (i = 0; i < n; i++)
  {
    tong += a[i];
    dem++;
  }
  if (dem == 0)
  {
    return 0;
  }
  kq = (tong / dem);

  return kq;
}

int demsonho(int a[], int n)
{
  TBC(a, n);
  if (n == 0)
  {
    return 0;
  }
  int i, dem = 0;
  for (i = 0; i < n; i++)
  {
    if (a[i] < TBC(a, n))
    {
      dem++;
    }
  }
  return dem;
}

int main()
{
  int n, a[Max], i;

  do
  {
    scanf("%d", &n);
  } while (n > 2000 || n < 0);

  Nhapmang(a, n);

  printf("%d ", TBC(a, n));

  printf("%d", demsonho(a, n));

  return 0;
}