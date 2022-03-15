#include <stdio.h>

int main()
{
  int num;
  printf("Enter your number: ");
  scanf("%d", &num);

  if (num == 2)
  {
    printf("%d is a prime number. \n", num);
  }
  else if (num % 2 != 0)
  {
    int i = 2, isPrime = 0;
    while (i < num)
    {
      if (num % i == 0)
      {
        isPrime = 1;
      }
      i++;
    };

    if (isPrime == 0)
    {
      printf("%d is a prime number. \n", num);
    }
    else
    {
      printf("%d is not a prime number. \n", num);
    }
  }
  else
  {
    printf("%d is not a prime number. \n", num);
  }

  return 0;
}