#include<stdio.h>
int main(void)
{
int num;
printf("Enter the number:");
scanf("%d",&num);
int temp=num,newnum=0;
while(temp>0){
newnum= newnum*10 + temp%10;
temp/=10;
}
printf("The reverse is: %d\n",newnum);
return 0;
}
