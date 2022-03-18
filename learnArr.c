#include <stdio.h>

int add(int a, int b)
{
  int sum;
  sum = a + b;
  return sum;
}

int main()
{
  int x, y, sum;
  x = 17;
  y = 23;

  sum = add(x, y);
  printf("sum: %d ", sum);

  return 0;
}