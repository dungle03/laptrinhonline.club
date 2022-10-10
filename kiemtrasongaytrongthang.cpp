#include <stdio.h>

int nhuan(int y)
{
  return (y % 400 == 0 || y % 4 == 0 && y % 100 != 0);
}

int ngaytrongthang(int m, int y)
{
  switch (m)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
  {
    return 31;
    break;
  }

  case 4:
  case 6:
  case 9:
  case 11:
  {
    return 30;
  }

  case 2:
    if (nhuan(y))
    {
      return 29;
    }
    else
      return 28;
  }
}

int main()
{
  int m, y;

  do
  {
    scanf("%d%d", &m, &y);
  } while (y < 0 || m < 1 || m > 12);
  printf("%d", ngaytrongthang(m, y));

  return 0;
}