
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Entered number is not prime\n");
    }
    else
    {
        printf("Entered number is prime\n");
    }

    return 0;
}