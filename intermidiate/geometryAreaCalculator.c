#include <stdio.h>

const float PI = 3.1416;

void circle()
{
  float r;
  printf("Enter circle radius: ");
  scanf("%f", &r);
  printf("Your circle area is: %.2f", PI * (r * r));
}

void triangle()
{
  float a, h;
  printf("Enter base line length, a: ");
  scanf("%f", &a);
  printf("Enter height, h: ");
  scanf("%f", &h);
  printf("Your triangle area is: %.2f", .5 * a * h);
};

void rectangle()
{
  float a, b;
  printf("Enter lenght a: ");
  scanf("%f", &a);
  printf("Enter width b: ");
  scanf("%f", &b);
  printf("Your rectangle area is: %.2f", (a * b));
}

void square()
{
  float a;
  printf("Enter square line lenght: ");
  scanf("%f", &a);
  printf("Your square area is: %.2f", (a * a));
}

void trapizium()
{
  float a, b, h;
  printf("Enter long line length, a: ");
  scanf("%f", &a);
  printf("Enter short line lenght, b: ");
  scanf("%f", &b);
  printf("Enter height, h: ");
  scanf("%f", &h);
  printf("Your trapigiam area is: %.2f", .5 * h * (a + b));
}

int main()
{
  while (1)
  {
    int type;
    printf("Geometry area calculator\n");
    printf("Choose your option\n");
    printf("1. Circle \n2. Triangle \n3. Rectangle \n4. Square \n5. Trapizium \n0 to exit...\n");
    scanf("%d", &type);

    if (type == 0)
    {
      break;
    };

    switch (type)
    {
    case 1:
      circle();
      break;
    case 2:
      triangle();
      break;
    case 3:
      rectangle();
      break;
    case 4:
      square();
      break;
    case 5:
      trapizium();
      break;
    default:
      printf("Something went wrong!!");
    }
    printf("\n\n");
  }
}