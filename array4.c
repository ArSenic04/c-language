#include <stdio.h>
int main()
{
    /*int a[2][3], sum=0;
    printf("Enter the number of 2D array's\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("\n sum = %d", sum);*/
    int a[3][3], SR, SC;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        SR = SC = 0; for (int j = 0; j < 3; j++)
        {
            SR = SR + a[i][j];
            SC = SC + a[j][i];
        }
        printf("SR=%d, SC=%d\n", SR, SC);
    }

    return 0;
}