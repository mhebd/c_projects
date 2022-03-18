#include <stdio.h>

int main()
{
  int lastNum, sum;

  printf("Enter your last number: ");
  scanf("%d", &lastNum);

  sum = (lastNum * (lastNum + 1)) / 2;

  printf("Sum of 1 to %d is: %d ", lastNum, sum);

  return 0;
}