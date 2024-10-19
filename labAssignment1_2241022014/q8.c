#include<stdio.h>
#include<math.h>
int main(void)
{
int num;
printf("Enter the number: ");
scanf("%d",&num);

int p1= pow(num,1);
int p2=pow(num,2);
int p3=pow(num,3);
int sum=p1+p2+p3;
printf("the sum of powers is %d\n",sum);
return 0;
}

