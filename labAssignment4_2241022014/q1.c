#include<stdio.h>
int square(int num);

int square(int num){
int sq=num*num;
return sq;
}
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
int result=square(n);
printf("The square of num is : %d\n",result);
return 0;
}
