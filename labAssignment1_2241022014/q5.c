#include<stdio.h>
int main(void)
{
	printf("enter the marks of subject 1 ");
	double s1;
	scanf("%lf",&s1);
	
	printf("enter the marks of subject 2 ");
	double s2;
	scanf("%lf",&s2);
	
	printf("enter the marks of subject 3 ");
	double s3;
	scanf("%lf",&s3);
	
	printf("enter the marks of subject 4 ");
	double s4;
	scanf("%lf",&s4);
	
	printf("enter the marks of subject 5 ");
	double s5;
	scanf("%lf",&s5);
	
	double si=(s1+s2+s3+s4+s5)/5;
	printf("the total percenatge of 5 subjects is %lf \n",si);
	return 0;
}
