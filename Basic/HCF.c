#include <stdio.h>

int main()
{
  int num1, num2, smallNum;

  printf("Enter your first number: ");
  scanf("%d", &num1);
  printf("Enter your second number: ");
  scanf("%d", &num2);

  if (num1 >= num2)
  {
    smallNum = num2;
  }
  else
  {
    smallNum = num1;
  }

  while (smallNum >= 1)
  {
    if (num1 % smallNum == 0 && num2 % smallNum == 0)
    {
      printf("Highest Common Factor is: %d ", smallNum);
      break;
    }
    smallNum--;
  }

  return 0;
}