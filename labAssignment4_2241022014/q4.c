#include<stdio.h>
int count(int n);

int count(int n){
if(n==0){
return 0;
}
return 1+count(n/10);
}

int main(){
printf("Enter the number : ");
int b=0;
scanf("%d",&b);
int res=count(b);
printf("The number of digits is: %d\n",res);

return 0;
}
