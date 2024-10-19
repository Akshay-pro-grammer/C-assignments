#include<stdio.h>
int fibonaci(int n);

int fibonaci(int n){
if(n==0 || n==1){
return 1;
}
return fibonaci(n-1)+fibonaci(n-2);
}

int main(){
printf("Enter the number : ");
int b=0;
scanf("%d",&b);
int res=fibonaci(b);
printf("The %dth fibonacci number  is: %d\n",b,res);

return 0;
}
