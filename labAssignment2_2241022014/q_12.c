#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the Three angles of the triangle: ");
scanf("%d %d %d",&a,&b,&c);
int sum=a+b+c;
if(sum==180){
	printf("The triangle is valid\n");
}else{
	printf("The triangle is invalid\n");
}
return 0;
}
