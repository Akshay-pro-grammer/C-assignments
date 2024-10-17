#include<stdio.h>
int main(void)
{
printf("enter a Number ");
int r,i;
scanf("%d",&r);
for(i=1;i<11;i++)
{
	printf("%d x %d = %d\n",r,i,r*i);
}
return 0;
}
