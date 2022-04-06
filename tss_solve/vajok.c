#include <stdio.h>

int main()
{
  int t, i = 1;
  printf("Enter your line number.");
  scanf("%d", &t);

  while (i <= t)
  {
    int n, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Case %d: ", i);
    for (j = 1; j <= n; j++)
    {
      if (n % j == 0)
      {
        printf("%d ", j);
      }
    }
    printf("\n");
    i++;
  }

  return 0;
}