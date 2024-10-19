#include<stdio.h>
int digitsum(int n);

int digitsum(int n){
if(n==0){
return 0;
}
return n%10+digitsum(n/10);
}

int main(){
printf("Enter the number : ");
int b=0;
scanf("%d",&b);
int res=digitsum(b);
printf("The sum of digits is: %d\n",res);

return 0;
}
