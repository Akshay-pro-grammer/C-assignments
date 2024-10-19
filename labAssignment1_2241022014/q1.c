#include<stdio.h>
#define MATH_PI 3.141593
int main(void)
{
printf("enter the radius of circle ");
double r;
scanf("%lf",&r);
double cir=MATH_PI*r*2;
double area=MATH_PI*r*r;
printf("the area of circle is %lf and circumference is %lf\n",area,cir);
return 0;
}
