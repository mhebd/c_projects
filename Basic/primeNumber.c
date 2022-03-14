#include <stdio.h>

int main()
{
  int n = 2, range;
  printf("Enter your range: ");
  scanf("%d", &range);

  while (n <= range)
  {
    if (n == 2)
    {
      printf("%d is a prime number. \n", n);
    }
    else if (n % 2 != 0)
    {
      int i = 2, isPrime = 0;
      ;
      while (i < n)
      {
        if (n % i == 0)
        {
          isPrime = 1;
        }
        i++;
      };

      if (isPrime != 1)
      {
        printf("%d is a prime number. \n", n);
      };
    }
    n++;
  }

  return 0;
}