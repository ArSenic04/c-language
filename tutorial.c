#include<stdio.h>
#include<math.h>
int main()
{
int r,y=0,x;
printf("Enter any five digit number :\n");
scanf("%d",&x);
while(x!=0){
r=x%10;
y=y*10+r;
x=x/10;
}printf("Reverse of number is :%d",y);

    return 0;
}
