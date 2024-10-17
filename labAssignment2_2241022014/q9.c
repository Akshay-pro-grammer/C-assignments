#include<stdio.h>
int main(){
printf("enter two numbers\n");
int a,b;
scanf("%d %d",&a,&b);
if(a==b)
{
printf("a is equal to b\n");
}
else if(a>b){
printf("a is greater than b\n");
}
else{
printf("a is less than b\n");
}
return 0;
}
