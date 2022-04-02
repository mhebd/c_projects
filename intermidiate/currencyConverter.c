#include <stdio.h>

void exchange(float amount, float rate)
{
  printf("Amount is: %.3f \n", amount);
  printf("Rate is: %.3f \n", rate);
  printf("Converted Amount is: %.3f \n", amount * rate);
};

int main()
{
  while (1)
  {
    int type;
    float amount;
    float bd2us = 0.012, bd2as = 0.015, bd2in = 0.88, us2bd = 86.38, as2bd = 64.7, in2bd = 1.14;
    printf("*****Currency Converter****\n");
    printf("Choose your option.\n");
    printf("1. Bangladesh to America \n2. Bangladesh to Austrelia \n3. Bangladesh to India \n4. America to Bangladesh \n5. Australia to Bangladesh \n6. India to Bangladesh \n0 to exit...\n=>> ");
    scanf("%d", &type);

    if (type == 0)
    {
      break;
    }

    printf("Enter your amount: ");
    scanf("%f", &amount);

    switch (type)
    {
    case 1:
      exchange(amount, bd2us);
      break;
    case 2:
      exchange(amount, bd2as);
      break;
    case 3:
      exchange(amount, bd2in);
      break;
    case 4:
      exchange(amount, us2bd);
      break;
    case 5:
      exchange(amount, as2bd);
      break;
    case 6:
      exchange(amount, in2bd);
      break;

    default:
      printf("Something went wrong!");
      break;
    }
    printf("\n\n");
  }
}