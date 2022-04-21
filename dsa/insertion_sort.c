// Insertion sort
// Time complexity = O(n^2)
// Space complexity = O(1)

#include <stdio.h>

int main()
{
  int size;
  printf("Enter totoal number of lenght: ");
  scanf("%d", &size);

  int arr[size];
  int i, j, tem, hole;

  printf("Enter your numbers: ");
  for (i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < size; i++)
  {
    tem = arr[i];
    hole = i;
    while (hole > 0 && arr[hole - 1] > tem)
    {
      arr[hole] = arr[hole - 1];
      hole--;
    }
    arr[hole] = tem;
  }

  printf("\nAfter sort \n");
  for (i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}