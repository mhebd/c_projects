#include <stdio.h>

int main()
{
  char name[10];

  printf("Enter your name: ");
  scanf("%s", &*name);

  printf("Welcome, %s! ", name);
  return 0;
}