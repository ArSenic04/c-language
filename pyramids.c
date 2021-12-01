#include <stdio.h>

int main()
{
    int rows, i, j;
    printf("Enter the rows  you want:");
    scanf("%d", &rows);
    for (i = 1; i <= rows; ++i)
    {
        for (j = 1; j < i + 1; ++j)
        {
            
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
