#include <stdio.h>
#include <unistd.h>

int main()
{
  int hour, min, sec;
  printf("Enter your time: ");
  scanf("%d%d%d", &hour, &min, &sec);

  int h = 0, m = 0, s = 0;

  while (1)
  {
    s++;
    if (s == 60)
    {
      m++;
      s = 0;
    }
    if (m == 60)
    {
      h++;
      m = 0;
    }

    // run loof in every 1 sec
    sleep(1);

    // Clear screen
    printf("\e[1;1H\e[2J");

    printf("\n\n========== Timer =========\n\n");
    printf("\t%02d : %02d : %02d \n", h, m, s);
    printf("\n==========///////=========\n\n");

    if (h == hour && m == min && s == sec)
    {
      printf("Your time is finished!\n");
      break;
    }
  }

  return 0;
}