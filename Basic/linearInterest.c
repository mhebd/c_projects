#include <stdio.h>

int main()
{
  double totalAmount, year, interestRate, totalPay, monthlyPay;

  printf("Enter your total amount: ");
  scanf("%lf", &totalAmount);
  printf("Enter your interest rate: ");
  scanf("%lf", &interestRate);
  printf("Enter your total year: ");
  scanf("%lf", &year);

  totalPay = totalAmount + totalAmount * (interestRate / 100) * year;
  monthlyPay = totalPay / (year * 12);

  printf("Total pay is: %0.2lf \n", totalPay);
  printf("Monthly pay is: %0.lf \n", monthlyPay);

  return 0;
}