#include <stdio.h>

int main()
{
  int t, i = 0;
  printf("Enter loop number: ");
  scanf("%d", &t);

  while (i < t)
  {
    int n, j, sum;
    printf("Enter a 5 digit number: ");
    scanf("%d", &n);
    for (j = 0; j < 5; j++)
    {
      if (j == 0)
      {
        sum = n % 10;
      };
      if (n / 10 == 0)
      {
        sum += n % 10;
      }
      n /= 10;
    }
    printf("sum = %d \n", sum);
    i++;
  }

  return 0;
}