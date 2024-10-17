#include<stdio.h>
int main(void)
{
printf("enter the base");
double b;
scanf("%lf",&b);
printf("enter the height");
double h;
scanf("%lf",&h);
double area=0.5*b*h;
printf("the area of triangle is %lf\n",area);
return 0;
}
