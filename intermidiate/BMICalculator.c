#include <stdio.h>

int main()
{
  float weight, height, bmi;
  printf("Enter your Weight(kg): ");
  scanf("%f", &weight);
  printf("Enter your Height(m): ");
  scanf("%f", &height);

  bmi = weight / (height * height);

  if (bmi < 18.5)
  {
    printf("Your BMI is %.2f. It's means you are Under weight", bmi);
  }
  else if (bmi >= 18.5 && bmi <= 25)
  {
    printf("Your BMI is %.2f. It's means you are Normal weight", bmi);
  }
  else if (bmi > 25)
  {
    printf("Your BMI is %.2f. It's means you are Over weight", bmi);
  }
  else
  {
    printf("Something went wrong!!");
  }

  return 0;
}