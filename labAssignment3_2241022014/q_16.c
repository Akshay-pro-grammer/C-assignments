#include<stdio.h>
int main(){
int sum=0;
int num=0;
for(int i=0;i<10;i++){
printf("Enter the number: ");
scanf("%d",&num);
if(num<0){
break;
}
sum+=num;
}
printf("sum is : %d\n",sum);
return 0;
}
