#include<stdio.h>
#include<math.h>
int main(void)
{
printf("Enter the number:");
int r,sum=0,digit,size=0,temp;
scanf("%d",&r);
temp=r;
while(temp>0){
temp/=10; 
size++;
}

printf("number of digits %d\n",size);

temp=r;
while(r>0){
	digit =r%10;
	sum+=(pow(digit,size));
	//printf("digit %d\n",sum);
	r/=10;
}

if(sum==temp){
printf("Yes , an Armstrong number\n");
}else{
printf("no\n");
}
return 0;
}
