#include <stdio.h>

void cel2kel(float temp)
{
  printf("Temperature in Celsius is: %.2f\n", temp);
  printf("Temperature in Kelvin is: %.2f\n", temp + 273.16);
}

void cel2fah(float temp)
{
  printf("Temperature in Celsius is: %.2f\n", temp);
  printf("Temperature in Fahrenheit is: %.2f\n", (temp * 1.8) + 32);
}

void fah2cel(float temp)
{
  printf("Temperature in Fahrenheit is: %.2f\n", temp);
  printf("Temperature in Celsius is: %.2f\n", (temp - 32) * 5 / 9);
}

void fah2kel(float temp)
{
  printf("Temperature in Fahrenheit is: %.2f\n", temp);
  printf("Temperature in Kelvin is: %.2f\n", (temp + 459.67) * 5 / 9);
}

void kel2cel(float temp)
{
  printf("Temperature in Kelvin is: %.2f\n", temp);
  printf("Temperature in Celsius is: %.2f\n", (temp - 273.16));
}

void kel2fah(float temp)
{
  printf("Temperature in Kelvin is: %.2f\n", temp);
  printf("Temperature in Fahrenheit is: %.2f\n", ((temp - 273.16) * 1.8) + 32);
}

int main()
{
  while (1)
  {
    int type;
    float temp;
    printf("+++Temperature Calculator+++\n");
    printf("Choose your option\n");
    printf("1. Celsius to Kelvin \n2. Celsius to Fahrenheit \n3. Fahrenheit to Celsius \n4. Fahrenheit to Kelvin \n5. Kelvin to Celsius \n6. Kelvin to Fahrenheit \n0 to exit... \n");
    scanf("%d", &type);

    if (type == 0)
    {
      break;
    }

    printf("Enter Temperature: ");
    scanf("%f", &temp);

    switch (type)
    {
    case 1:
      cel2kel(temp);
      break;
    case 2:
      cel2fah(temp);
      break;
    case 3:
      fah2cel(temp);
      break;
    case 4:
      fah2kel(temp);
      break;
    case 5:
      kel2cel(temp);
      break;
    case 6:
      kel2fah(temp);
      break;

    default:
      break;
    }
  }

  return 0;
}