#include <stdio.h>

int main()
{
  char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

  int dom[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int i, j, k, counter;

  for (i = 0; i < 12; i++)
  {
    k = dom[i];
    printf("\n--------------- %s --------------\n", month[i]);
    printf("Sun Mon Tue Wed Thr Fri Sat\n");
    for (j = 1; j <= k; j++)
    {
      printf(" %2d ", j);
      if (j % 7 == 0)
      {
        printf("\n");
      }
    }
  }

  return 0;
}