#include<stdio.h>
int main(){
printf("enter your age\n");
int a;
scanf("%d",&a);
if(a<18)
{
printf("you are not eligible to vote\n");
}
else{
printf("you are eligible to vote\n");
}
return 0;
}
