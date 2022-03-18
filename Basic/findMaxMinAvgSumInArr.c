#include <stdio.h>

int find_max(int arr[10])
{
  int max = 0;
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    };
  };
  return max;
};

int find_min(int arr[10])
{
  int min = 100;
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    };
  };
  return min;
};

double find_sum(int arr[10])
{
  int sum = 0;
  for (int i = 0; i < 10; i++)
  {
    sum = sum + arr[i];
  };
  return sum;
};

double find_avg(int sum, int total)
{
  double avg;
  avg = sum / total;
  return avg;
};

int main()
{
  int num[10] = {23, 19, 48, 20, 33, 87, 53, 30, 86, 97};
  double max, min, sum, avg;

  max = find_max(num);
  min = find_min(num);
  sum = find_sum(num);
  avg = find_avg(sum, 10);

  printf("Max num is: %0.2lf \n", max);
  printf("Min num is: %0.2lf \n", min);
  printf("Sum is: %0.2lf \n", sum);
  printf("Avg is: %0.2lf \n", avg);

  return 0;
}