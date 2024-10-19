#include<stdio.h>
void fib(int r);

void fib(int r){

int a=0,b=1,c;
printf("%d",a);
printf("%d",b);
for(int i=1;i<r-1;i++){
c=a+b;
printf("%d",c);
a=b;
b=c;
}



}
int main(void)
{
printf("Enter the number of elements:");
int r;
scanf("%d",&r);
fib(r);
return 0;
}
