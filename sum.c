#include <stdio.h>
void main()
{
    int a, num1, num2, num3, num4, num5;
    scanf("%d", &a);
    num1 = a % 10;
    a = a / 10;
    num2 = a % 10;
    a = a / 10;
    num3 = a % 10;
    a = a / 10;
    num4 = a % 10;
    a = a / 10;
    num5 = a;
    printf("%d", num1 + num2 + num3 + num4 + num5);
}