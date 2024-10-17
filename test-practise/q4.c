#include<stdio.h>
#define MATH_PI 3.14
int main(void)
{
printf("enter the radius of circle ");
double r;
scanf("%lf",&r);
double area=MATH_PI*r*r;
printf("the area of circle is %lf\n",area);
return 0;
}
