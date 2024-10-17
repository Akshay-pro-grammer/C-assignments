#include<stdio.h>
int main(void)
{
	double a,b;
	printf("enter the first value : ");
	scanf("%lf",&a);
	printf("enter the second value : ");
	scanf("%lf",&b);
	int sum=(int)(a+b);
	int average=(int)(a+b)/2;
	printf("the sum is : %d\n",sum);
	printf("the average is : %d\n",average);
	return 0;
}
