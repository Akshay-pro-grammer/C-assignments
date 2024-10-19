#include<stdio.h>
#include<math.h>
void armstrong(int r);
void armstrong(int r){
int sum=0,digit,size=0,temp;
	temp=r;
	while(temp>0){
	temp/=10; 
	size++;
	}

	printf("number of digits %d\n",size);

	temp=r;
	while(r>0){
		digit =r%10;
		sum+=(pow(digit,size));
		//printf("digit %d\n",sum);
		r/=10;
	}

	if(sum==temp){
	printf("Yes , an Armstrong number\n");
	}else{
	printf("no\n");
	}

}
int main(void)
{
printf("Enter the number:");
int r;
scanf("%d",&r);
armstrong(r);
return 0;
}
