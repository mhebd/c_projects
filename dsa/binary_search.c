// Binary search
// Time complexity = O(log n)
// Space complexity = O(1)

#include <stdio.h>

int main()
{
  int arr[10] = {13, 28, 34, 39, 47, 53, 69, 71, 82, 99};
  int search_num, mid, start = 0, end = 9;

  printf("Enter search number: ");
  scanf("%d", &search_num);

  while (start <= end)
  {
    mid = (end + start) / 2;
    if (arr[mid] == search_num)
    {
      printf("%d is in the array and index is %d\n", search_num, mid);
      return 0;
    }
    else if (arr[mid] < search_num)
    {
      start = mid + 1;
    }
    else if (arr[mid] > search_num)
    {
      end = mid - 1;
    }
  }

  printf("%d is not in the array.\n", search_num);

  return 0;
}