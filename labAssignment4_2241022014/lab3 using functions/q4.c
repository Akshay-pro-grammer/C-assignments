#include<stdio.h>
void simulate();

void simulate(){

	int i=1;
	while(i)
	{
		printf("enter a Number ");
		int r;
		scanf("%d",&r);

		if(r<0)
		{
			printf("NEGATIVE\n");
		}
			else if(r==0){
			printf("ZERO\n");
		}
		else{
			printf("POSITIVE\n");
		}
		printf("Do you want to check? 0 for no ");
		scanf("%d",&i);
	}

}
int main(void)
{
simulate();
return 0;
}
