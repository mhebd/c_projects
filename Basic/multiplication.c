#include <stdio.h>

int main()
{
  int i = 1, num, range;
  printf("Enter your number: ");
  scanf("%d", &num);
  printf("Enter your range: ");
  scanf("%d", &range);

  while (i <= range)
  {
    printf("%d X %d = %d \n", num, i, num * i);
    i++;
  };

  return 0;
}