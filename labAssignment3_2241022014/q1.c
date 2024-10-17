#include<stdio.h>
int main(void)
{
printf("enter a Number ");
int r;
int i=1;
scanf("%d",&r);
while(i<r)
{
	if(i%2==1)
	printf("%d\n",i);
i++;
}
return 0;
}
