#include <stdio.h>
#include <math.h>
#include <string.h>
/*void printarray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i+1, *(ptr + i));
    }
}
int main()
{
    int arr[] = {1, 4, 65, 78, 56, 45, 98, 23, 12};
    printarray(arr, n);
    return 0;
}*/
void printtable(int *mul, int num, int n)
{
    printf("The multiplication table of %d is:\n", num);
    for (int i = 0; i < n; i++)
    {
        mul[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dX%d=%d\n", num, i + 1, mul[i]);
    }
}
int main(){
    int mul[13][3];
    printtable(mul[0],2,10);
    printf("\n");
    printtable(mul[12],12,12);
    return 0;
}