#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c;
  scanf("%lf%lf%lf", &a, &b, &c);
  if (a < b + c && b < a + c && c < a + b)
  {
    printf("Chu vi = %.1lf", a + b + c);
  }
  else
    printf("Dien tich = %.1lf", (a + b) * c * 0.5);

  return 0;
}