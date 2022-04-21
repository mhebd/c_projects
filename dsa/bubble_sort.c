// Bubble Sort
// Time complexity = O(n^2)
// Space complexity = O(1)

#include <stdio.h>

int main()
{
  int size;
  printf("Enter number length: ");
  scanf("%d", &size);

  int i, j, tem, arr[size];

  for (i = 0; i < size; i++)
  {
    printf("Enter your number: ");
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] > arr[j])
      {
        tem = arr[i];
        arr[i] = arr[j];
        arr[j] = tem;
      }
    }
  }

  for (i = 0; i < size; i++)
  {
    printf("%d\t\n", arr[i]);
  }

  return 0;
}