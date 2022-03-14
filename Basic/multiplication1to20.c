// Multiply by addition
#include <stdio.h>

int main()
{
  int n = 1, range = 20;

  while (n <= range)
  {
    int i = 1, m = 0;
    while (i <= 10)
    {
      m = m + n;
      printf("%d X %d = %d \n", n, i, m);
      i++;
    }
    n++;
    printf("=================\n");
  }

  return 0;
}
