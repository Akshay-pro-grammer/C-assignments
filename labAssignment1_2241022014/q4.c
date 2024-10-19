#include<stdio.h>
int main(void)
{
printf("enter the rate ");
double r;
scanf("%lf",&r);
printf("enter the time in years ");
double t;
scanf("%lf",&t);
printf("enter the principal ");
double p;
scanf("%lf",&p);
double si=p*r*t/100;
printf("the simple interest is %lf \n",si);
return 0;
}
