#include<stdio.h>
void table(int r);

void table(int r){
	for(int i=1;i<11;i++)
	{
		printf("%d x %d = %d\n",r,i,r*i);
	}
		
}

int main(void)
{
printf("enter a Number ");
int r;
scanf("%d",&r);
table(r);
return 0;
}
