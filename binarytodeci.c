#include<stdio.h>
int main( )
{
int n,nsave,rem,d,j=1,dec=0;
printf("Enter the number in binary");
scanf ("%d", &n) ;
nsave=n;
while (n>0)
{
rem= n % 10;
d=rem*j;
dec+=d;
j*=2;
n=n/10; /*skipping last digit*/
}
printf("Binary number = %d, Decimal number = %d\n",nsave,dec);
return 0;
}