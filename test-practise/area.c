#include<stdio.h>
double area();
int main(void)
{
printf("enter the radius of circle ");
double r;
scanf("%lf",&r);
double res=area(r);
printf("the area of circle is %lf\n",res);
return 0;
}

double area(double r){
	return 3.14*r*r;
}
