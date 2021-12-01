#include <stdio.h>

int main()
{
    float p, m, c, total;
    printf("Enter your physics marks out of 100\n");

    scanf("%f", &p);
    if (p > 100)
    {
        printf("Invalid marks\n");
        printf("%f percentage is invalid\n", total);
    }
    printf("Enter your maths marks out of 100 \n");
    scanf("%f", &m);
    if (m > 100)
    {
        printf("Invalid marks\n");
    }

    printf("Enter your chemistry marks out of 100\n");
    scanf("%f", &c);
    if (c > 100)
    {
        printf("Invalid marks\n");
    }

    printf("Total percentage of your three subjects is %.2f\n", total = (p + m + c) / (300) * (100));

    if (total <= 90)
    {
        printf("You are not qualified for JEE ADVANCE\n");
    }
    else
    {
        printf("You are qualified for JEE ADVANCE\n");
    }
    /*switch (total)
    {
    case 'p':
        printf("if %f < 45 you are failed\n", p);
        break;
    case 'm':
        printf("if %f < 45 you are failed\n", m);
        break;
    case 'c':
        printf("if (%f || %f) <= 75 you are failed\n", c, total);
        break;
    default:
        printf("you passed\n");
        break;
    }*/

    return 0;
}