#include<stdio.h>
void palindrome(int num);
void palindrome(int num){
	int temp=num,newnum=0;
	while(temp>0){
		newnum= newnum*10 + temp%10;
		temp/=10;
	}
	if(num==newnum){
		printf("Yes , it is a palindrome\n");
	}else{
		printf("NO\n");
	}
}
int main(void)
{
int num;
printf("Enter the number:");
scanf("%d",&num);
palindrome(num);
return 0;
}
