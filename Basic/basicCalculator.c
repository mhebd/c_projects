#include <stdio.h>

int main()
{
  while (1)
  {
    int type;
    float num1, num2;

    printf("Chose your option. \n");
    printf("1. Addition \n2. Substraction \n3. Multiplication \n4. Divition \n0 to exit... \n");
    scanf("%d", &type);

    if (type == 0)
    {
      break;
    }

    printf("Enter your first number: ");
    scanf("%f", &num1);
    printf("Enter your second number: ");
    scanf("%f", &num2);

    switch (type)
    {
    case 1:
      printf("%0.2f + %0.2f = %0.2f \n", num1, num2, num1 + num2);
      break;
    case 2:
      printf("%0.2f - %0.2f = %0.2f\n", num1, num2, num1 - num2);
      break;
    case 3:
      printf("%0.2f X %0.2f = %0.2f\n", num1, num2, num1 * num2);
      break;
    case 4:
      printf("%0.2f / %0.2f = %0.2f\n", num1, num2, num1 / num2);
      break;
    default:
      printf("Something went wrong! \n");
      break;
    };
    printf("*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/* \n");
  }

  return 0;
}