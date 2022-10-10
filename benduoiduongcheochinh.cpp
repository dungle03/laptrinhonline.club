#include <stdio.h>

int main()
{
  double a[13][13], tong, tbc = 0;
  int dem = 0;
  char x;
  scanf("%c", &x);
  for (int i = 1; i <= 12; i++)
  {
    for (int j = 1; j <= 12; j++)
    {
      scanf("%lf", &a[i][j]);
    }
  }
  for (int i = 1; i <= 12; i++)
  {
    for (int j = 1; j <= 12; j++)
    {
      if (i > j)
      {
        dem++;
        tong += a[i][j];
      }
    }
  }
  if (x == 'S')
    printf("%.1lf", tong);
  if (x == 'M')
    printf("%.1lf", (double)tong / dem);

  return 0;
}