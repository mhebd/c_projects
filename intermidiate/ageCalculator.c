#include <stdio.h>
#include <time.h>

int main()
{
  time_t t = time(NULL);
  struct tm date = *localtime(&t); // Ger current time object
  int DOB_year, DOB_month, DOB_day, year, month, day, more;

  printf("Enter your date of birth. \n");
  printf("dd mm yyyy : ");
  scanf("%d %d %d", &DOB_day, &DOB_month, &DOB_year);

  date.tm_year += 1900;
  date.tm_mon += 1;

  if (DOB_day > date.tm_mday)
  {
    date.tm_mday += 30;
    DOB_month += 1;
  }

  if (DOB_month > date.tm_mon)
  {
    date.tm_mon += 12;
    DOB_year += 1;
  }

  day = date.tm_mday - DOB_day;
  month = date.tm_mon - DOB_month;
  year = date.tm_year - DOB_year;

  printf("Your age is: %d year %d month %d day \n", year, month, day);

  printf("Do your want to know more about your age? \n");
  printf("1. Yes \n2. No \n");
  scanf("%d", &more);

  if (more == 1)
  {
    float h, d, w, m;
    h = (day * 24) + (month * 30 * 24) + (year * 12 * 30.5 * 24);
    d = h / 24;
    w = d / 7;
    m = d / 30.5;
    printf("Your age is in month: %.2f \n", m);
    printf("Yoru age is in week: %.2f \n", w);
    printf("your age is in day: %.2f \n", d);
    printf("Your age is in hour: %.2f \n", h);
  }
  else if (more == 2)
  {
    return 0;
  }
  return 0;
}