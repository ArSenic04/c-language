#include <stdio.h>
int main()
{
    float a, b = 0.621371;
    printf("Enter the kilometers you travelled \n");
    scanf("%f", &a);
    printf(" %.2f equal to %.2f miles \n", a, a * b);
    printf("Enter the kilometers you travelled \n");
    scanf("%f", &a);
    printf(" %.2f equal to %.2f cms \n", a, a *100000);
    printf("Enter the kilometers you travelled \n");
    scanf("%f", &a);
    printf(" %.2f equal to %.2f inches \n", a, a * 39370.1);

    return 0;
}