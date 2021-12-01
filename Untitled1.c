#include<stdio.h>
void main(){
double ba_sal,gross_sal,d_a,r_a;
printf("enter the basic salary\n");
scanf("%lf",&ba_sal);
d_a=(ba_sal*40)/100;
r_a=(ba_sal*20)/100;
gross_sal=d_a+r_a+ba_sal;
printf("The gross salary is : %lf",gross_sal);
}
