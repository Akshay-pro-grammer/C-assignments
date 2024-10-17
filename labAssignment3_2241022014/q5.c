#include<stdio.h>
int main(void)
{
printf("Enter the number of elements:");
int r;
scanf("%d",&r);
int a=0,b=1,c;
printf("%d",a);
printf("%d",b);
for(int i=1;i<r-1;i++){
c=a+b;
printf("%d",c);
a=b;
b=c;
}
return 0;
}
