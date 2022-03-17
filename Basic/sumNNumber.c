#include <stdio.h>

int main()
{
  double firstNumber, totalNumber, difference, sum;

  printf("Enter initial number: ");
  scanf("%lf", &firstNumber);
  printf("Enter totla number: ");
  scanf("%lf", &totalNumber);
  printf("Enter your diffrence: ");
  scanf("%lf", &difference);

  sum = (totalNumber / 2) * (2 * firstNumber + (totalNumber - 1) * difference);

  printf("Total is: %0.2lf", sum);
  return 0;
}