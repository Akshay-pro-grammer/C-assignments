#include<stdio.h>
int main(void)
{
printf("enter the temperature in celsius ");
double c;
scanf("%lf",&c);
double f=(9*c/5)+32;
printf("the temperature in farenhiet is %lf \n",f);
printf("enter the temperature in farenhiet ");
double f2;
scanf("%lf",&f2);
double c2=(f2-32)*5/9;
printf("the temperature in celsius is %lf \n",c2);
return 0;
}
