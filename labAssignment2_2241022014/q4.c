#include<stdio.h>
int main(){
printf("enter a number\n");
int a;
scanf("%d",&a);
if(a%5==0 || a%11==0)
{
printf("The number is divisible by 5 or 11\n");
}
else{
printf("The number is not divisible by 5 or 11\n");
}
return 0;
}
