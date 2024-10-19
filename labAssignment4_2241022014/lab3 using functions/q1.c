#include<stdio.h>
void odds(int r);
void odds(int r){
int i=1;
	while(i<r)
	{
		if(i%2==1)
		printf("%d\n",i);
	i++;
	}
}
int main(void)
{
printf("enter a Number ");
int r;
scanf("%d",&r);
odds(r);
return 0;
}
