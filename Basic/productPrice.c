#include <stdio.h>

int main()
{
  double productPrice, lessPercentage, payablePrice;

  printf("Enter product price: ");
  scanf("%lf", &productPrice);
  printf("Enter product less percnetage: ");
  scanf("%lf", &lessPercentage);

  payablePrice = productPrice - ((productPrice * lessPercentage) / 100);

  printf("Payable price is: %0.2lf ", payablePrice);

  return 0;
}