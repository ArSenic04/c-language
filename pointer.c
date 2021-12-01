#include <stdio.h>
int main()
{
    int a = 8, *ptr = &a;

    printf("%d\n", ptr);
    ptr++;
    printf("%d\n", ptr);
    char b = 'k', *p = &b;
    printf("%d\n", p);
    p++;
    printf("%d\n", p);
    float c = 33.45, *f = &c;
    printf("%d\n", f);
    printf("%f\n", *f);
    f++;
    printf("%d\n", f);

    return 0;
}