#include <stdio.h>
int main()
{
  char o;
  double first, second;
  printf("Enter an sign (+, -, *, /): ");  
  scanf("%c", &o);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &first, &second);

  switch (o)
  {
  case '+':
    printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    break;
  case '-':
    printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    break;
  case '*':
    printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    break;
  case '/':
    printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    break;

  default:
    printf("Error! sign is not correct");
  }

  return 0;
}
