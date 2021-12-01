#include <stdio.h>

int main()
{
    /*char ch;
printf("Enter the value\n");
scanf("%c", &ch);
printf("ascii value of %c is %d", ch, ch);*/
    int a[3][3], b[3][2], c[3][2], sum;
    printf("Enter the values of A matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the the values of B matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (a[i][k] * b[k][j]);
            }
            c[i][j] = sum;
        }
    }
    printf("The multiplication of A and B matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}