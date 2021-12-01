#include <stdio.h>
#include <math.h>


    int main()
{
    
    float  log, x;
    printf("Enter the number whose log you want:-");
    scanf("%f", &x);
    log =  (x-1) - (pow(x-1, 2)) / 2 + (pow(x-1, 3)) / 3 - (pow(x-1, 4))/4;
    printf("%f",log);
   


    return 0;
}
