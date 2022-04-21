// Selection sort
// Time complexity = O(n^2)
// Space complexity = O(1)

#include <stdio.h>

int main()
{
  int size;
  printf("Enter total number of input: ");
  scanf("%d", &size);

  int arr[size];
  int i, j, tem, select;

  printf("Enter your numbers: ");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < size - 1; i++)
  {
    select = i;
    for (j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[select])
      {
        select = j;
      }
    }
    tem = arr[i];
    arr[i] = arr[select];
    arr[select] = tem;
  }

  printf("\nAfter sort\n");
  for (i = 0; i < size; i++)
  {
    printf("%d \n", arr[i]);
  }

  return 0;
}