#include<stdio.h>
int sum(int n);

int sum(int n){
if(n==1){
return 1;
}
return n+sum(n-1);
}

int main(){
printf("Enter the number : ");
int b=0;
scanf("%d",&b);
int res=sum(b);
printf("The sum of the numbers is: %d\n",res);

return 0;
}
