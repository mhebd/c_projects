#include <stdio.h>

int main()
{
  double celsius, farenheite;

  printf("Enter your celsius tempareture: ");
  scanf("%lf", &celsius);

  farenheite = (celsius * 1.8) + 32;

  printf("Your farenheite tempareture is: %0.2lf F", farenheite);
  return 0;
}