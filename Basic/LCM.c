#include <stdio.h>

int main()
{
  int num1, num2, x, hcf, mul, lcm;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter second number: ");
  scanf("%d", &num2);

  mul = num1 * num2;

  if (num1 == 0)
  {
    hcf = num1;
  }
  else if (num2 == 0)
  {
    hcf = num2;
  }
  else
  {
    while (num2 != 0)
    {
      x = num2;
      num2 = num1 % num2;
      num1 = x;
    }
    hcf = num1;
  }

  lcm = mul / hcf;

  printf("Least Common Multiple is: %d ", lcm);

  return 0;
}