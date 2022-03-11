#include <stdio.h>

int main()
{
  int n = 0, range;
  printf("Enter your print range: ");
  scanf("%d", &range);

  while (n <= range)
  {
    printf("%d \n", n);
    n++;
  };

  return 0;
}