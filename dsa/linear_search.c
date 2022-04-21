// Linear search code
// Time complexity = O(n)
// Sapce complexity = O(1)

#include <stdio.h>

int main()
{
  int arr[10] = {37, 69, 19, 33, 87, 90, 31, 57, 86, 45};

  int search_num;
  printf("Enter your searchable number: ");
  scanf("%d", &search_num);

  for (int i = 0; i < 10; i++)
  {
    if (arr[i] == search_num)
    {
      printf("%d is in the array and index is %d\n", search_num, i);
      return 0;
    };
  };

  printf("%d is not in the array.\n", search_num);
  return 0;
}