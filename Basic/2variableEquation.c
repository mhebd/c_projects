#include <stdio.h>

int main()
{
  double a1, a2, b1, b2, c1, c2, devider, x, y;

  printf("Enter A1: ");
  scanf("%lf", &a1);
  printf("Enter B1: ");
  scanf("%lf", &b1);
  printf("Enter C1: ");
  scanf("%lf", &c1);
  printf("Enter A2: ");
  scanf("%lf", &a2);
  printf("Enter B2: ");
  scanf("%lf", &b2);
  printf("Enter C2: ");
  scanf("%lf", &c2);

  devider = (a1 * b2) - (a2 * b1);

  if ((int)devider == 0)
  {
    printf("The value of X & Y is undefined.");
    return 0;
  };

  x = (b2 * c1 - b1 * c2) / devider;
  y = (a1 * c2 - a2 * c1) / devider;

  printf("Your X is: %0.2lf \n", x);
  printf("Your Y is: %0.2lf \n", y);

  return 0;
}