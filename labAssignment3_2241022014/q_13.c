#include<stdio.h>
int main(){
printf("enter the number to check");
int b,sum=0;
scanf("%d",&b);
for(int i=1;i<b;i++){
	if(b%i==0){
		sum+=i;
	}
}
if(sum==b){
	printf("%d is a perfect number\n",b);
}else{
	printf("It is not a perfect number\n");
}
return 0;
}
