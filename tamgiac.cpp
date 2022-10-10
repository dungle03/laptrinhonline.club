#include <stdio.h>
#include <math.h>

void checktamgiac(double a, double b, double c)
{

  if (a + b > c || a + c > b || b + c > a)
  {
    printf("Day la 1 tam giac\n");
  }
  else
  {
    printf("Day khong la 1 tam giac");
  }
}

// double checktamgiaccan(double a, double b, double c)
// {
//   if (a == b || a == c || b == c)
//   {
//     printf("Day la 1 tam giac can\n");
//   }
//   else
//     printf("Day khong la tam giac can\n");
// }

double chuvi(double a, double b, double c)
{
  double p = a + b + c;
  printf("Chu vi tam giac: P = %.2lf + %.2lf + %.2lf = %.2lf\n", a, b, c, p);
}

double dientich(double a, double b, double c)
{
  double p = a + b + c;
  double s = sqrt(p * (p - a) * (p - b) * (p - c));
  printf("Dien tich tam giac: S = %.2lf", s);
}

int main()
{
  double a, b, c;

  do
  {
    printf("Nhap vao 3 canh cua tam giac: \n");
    scanf("%lf%lf%lf", &a, &b, &c);
  } while (a < 0 || b < 0 || c < 0);

  checktamgiac(a, b, c);
  checktamgiaccan(a, b, c);

  chuvi(a, b, c);

  dientich(a, b, c);

  return 0;
}