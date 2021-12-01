#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, nguess = 1;
    srand(time(0));
    num = rand() % 50 + 1;

    do
    {
        printf("Gusess the number between 1 to 50\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower Number please\n");
        }
        else if (guess < num)
        {

            printf("Higher Number please\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguess);
        }
        nguess++;
    } while (guess != num);

    return 0;
}