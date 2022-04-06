#include <stdio.h>

int main()
{
  int t, i;
  printf("Enter your total box number: ");
  scanf("%d", &t);

  for (i = 0; i < t; i++)
  {
    int n, j = 0, k;
    printf("Enter box line length: ");
    scanf("%d", &n);
    while (j < n)
    {
      for (k = 0; k < n; k++)
      {
        printf(" * ");
      }
      printf("\n");
      j++;
    }
    printf("\n");
  }

  return 0;
}