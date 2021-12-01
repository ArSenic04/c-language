#include <stdio.h>
fib(int number)// for first methode//
int fibo(int);
int main()
{
    int n, f;
    int n, sum = 0, b = 1;
    printf("Enter number till fibonacci series you want\n");
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    printf("%d is at %d th place\n", fib(number), n);
    return 0;


    //Second way to write fibonacci series sum


    printf("Enter the value;\n");
    scanf("%d", &n);
    f = fibo(n);
    printf("%d\n", f);
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}