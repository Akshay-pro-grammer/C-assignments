#include<stdio.h>
#include<math.h>
int main(){

int temp;
int size;
for(int r=1;r<11;r++){
temp=r;
size=0;
	while(temp>0){
	temp/=10; 
	size++;
	}

temp=r;
int sum=0;
	while(temp>0){
		int digit =temp%10;
		sum+=(pow(digit,size));
		//printf("digit %d\n",sum);
		temp/=10;
	}

	if(sum==r){
	printf("Yes ,%d an Armstrong number\n",sum);
	}
}
return 0;
}
